% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/crit_SUR.R
\name{crit_SUR}
\alias{crit_SUR}
\title{Analytical expression of the SUR criterion for two or three objectives.}
\usage{
crit_SUR(x, model, paretoFront = NULL, critcontrol = NULL, type = "UK")
}
\arguments{
\item{x}{a vector representing the input for which one wishes to calculate the criterion,}

\item{model}{a list of objects of class \code{\link[DiceKriging]{km}} (one for each objective),}

\item{paretoFront}{(optional) matrix corresponding to the Pareto front of size \code{[n.pareto x n.obj]}, or any reference set of observations,}

\item{critcontrol}{list with two possible options.\cr
 
A) One can use the four following arguments:
       \itemize{
       \item \code{integration.points}, matrix of integration points of size \code{[n.integ.pts x d]};
       \item \code{integration.weights}, vector of integration weights of length n.integ.pts;
       \item \code{mn.X} and \code{sn.X}, matrices of kriging means and sd, each of size \code{[n.obj x n.integ.pts]}; 
       \item \code{precalc.data}, list of precalculated data (based on kriging models at integration points) for faster computation. 
       }
B) Alternatively, one can define arguments passed to \code{\link[GPareto]{integration_design_optim}}:
 \code{SURcontrol} (optional), \code{lower}, \code{upper}, \code{min.prob} (optional). This is slower since arguments of
 A), used in the function, are then recomputed each time (note that this is not the case when called from \code{\link[GPareto]{GParetoptim}} and \code{\link[GPareto]{crit_optimizer}}).\cr \cr
Options for the \code{\link[GPareto]{checkPredict}} function: \code{threshold} (\code{1e-4)} and \code{distance} (\code{covdist}) are used to avoid numerical issues occuring when adding points too close to the existing ones.}

\item{type}{"\code{SK}" or "\code{UK}" (default), depending whether uncertainty related to trend estimation has to be taken into account.}
}
\value{
Value of the criterion.
}
\description{
Computes the SUR criterion (Expected Excursion Volume Reduction) at point \code{x} for 2 or 3 objectives.
To avoid numerical instabilities, the new point is penalized if it is too close to an existing observation.
}
\examples{
#---------------------------------------------------------------------------
# crit_SUR surface associated with the "P1" problem at a 15 points design
#---------------------------------------------------------------------------
set.seed(25468)
library(DiceDesign)
library(KrigInv)

n_var <- 2 
n.obj <- 2 
f_name <- "P1" 
n.grid <- 14
test.grid <- expand.grid(seq(0, 1, length.out = n.grid), seq(0, 1, length.out = n.grid))
n_appr <- 15 
design.grid <- round(maximinESE_LHS(lhsDesign(n_appr, n_var, seed = 42)$design)$design, 1)
response.grid <- t(apply(design.grid, 1, f_name))
paretoFront <- t(nondominated_points(t(response.grid)))
mf1 <- km(~., design = design.grid, response = response.grid[,1])
mf2 <- km(~., design = design.grid, response = response.grid[,2])

model <- list(mf1, mf2)


integration.param <- integration_design_optim(lower = c(0, 0), upper = c(1, 1), model = model)
integration.points <- as.matrix(integration.param$integration.points)
integration.weights <- integration.param$integration.weights

precalc.data <- list()
mn.X <- sn.X <- matrix(0, nrow = n.obj, ncol = nrow(integration.points))

for (i in 1:n.obj){
  p.tst.all <- predict(model[[i]], newdata = integration.points, type = "UK", checkNames = FALSE)
  mn.X[i,] <- p.tst.all$mean
  sn.X[i,]   <- p.tst.all$sd
  precalc.data[[i]] <- precomputeUpdateData(model[[i]], integration.points)
}

critcontrol <- list(integration.points = integration.points,
                    integration.weights = integration.weights,
                    mn.X = mn.X, sn.X = sn.X, precalc.data = precalc.data)
## Alternatively: critcontrol <- list(lower = rep(0, n_var), upper = rep(1,n_var))
                
EEV_grid <- apply(test.grid, 1, crit_SUR, model = model, paretoFront = paretoFront,
                  critcontrol = critcontrol)
                  

filled.contour(seq(0, 1, length.out = n.grid), seq(0, 1, length.out = n.grid),
               matrix(pmax(0,EEV_grid), nrow = n.grid), main = "EEV criterion",
               xlab = expression(x[1]), ylab = expression(x[2]), color = terrain.colors,
               plot.axes = {axis(1); axis(2);
                            points(design.grid[,1], design.grid[,2], pch = 21, bg = "white")
                            }
              )         
}
\references{
V. Picheny (2014), Multiobjective optimization using Gaussian process emulators via stepwise uncertainty reduction, 
\emph{Statistics and Computing}.
}
\seealso{
\code{\link[GPareto]{crit_EHI}}, \code{\link[GPareto]{crit_SMS}},  \code{\link[GPareto]{crit_EMI}}.
}

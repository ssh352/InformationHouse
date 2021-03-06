% Generated by roxygen2 (4.1.0): do not edit by hand
% Please edit documentation in R/rankdist.R
\name{MomentsEst}
\alias{MomentsEst}
\title{Find Initial Values of phi}
\usage{
MomentsEst(dat, size, pi0 = NULL)
}
\arguments{
\item{dat}{a RankData object}

\item{size}{the number of samples to take in the linear model}

\item{pi0}{an optional argument showing the location of central ranking.
If not provided, Borda Count method is used to estimate the central ranking.}
}
\value{
estimated phi
}
\description{
\code{MomentsEst} finds the initial values of phi which can be used in the subsequent optimization problems.
Linear model is fitted to the log odds of rankings.This function is only useful to the Weighted Kendall model.
}
\examples{
MomentsEst(apa_obj,40)
}


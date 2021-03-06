% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/dataSets.R
\docType{data}
\name{eusilc13puf}
\alias{eusilc13puf}
\title{Synthetic EU-SILC 2013 survey data}
\format{
A data frame with 13513 observations on the following 62 variables.
\describe{
\item{db030}{integer; the household ID.}
\item{hsize}{integer; the number of persons in the household.}
\item{db040}{factor; the federal state in which the household is
located (levels \code{Burgenland}, \code{Carinthia}, \code{Lower Austria},
\code{Salzburg}, \code{Styria}, \code{Tyrol}, \code{Upper Austria},
\code{Vienna} and \code{Vorarlberg}).}
\item{age}{integer; the
person's age.}
\item{rb090}{factor; the person's gender (levels
\code{male} and \code{female}).}
\item{pid}{personal ID}
\item{weight}{sampling weights}
\item{pl031}{factor; the person's
economic status (levels \code{1} = working full time, \code{2} = working
part time, \code{3} = unemployed, \code{4} = pupil, student, further
training or unpaid work experience or in compulsory military or community
service, \code{5} = in retirement or early retirement or has given up
business, \code{6} = permanently disabled or/and unfit to work or other
inactive person, \code{7} = fulfilling domestic tasks and care
responsibilities).}
\item{pb220a}{factor; the person's citizenship
(levels \code{AT}, \code{EU} and \code{Other}).}
\item{pb190}{for details, see Eurostat's code book}
\item{pe040}{for details, see Eurostat's code book}
\item{pl111}{for details, see Eurostat's code book}
\item{pgrossIncomeCat}{for details, see Eurostat's code book}
\item{pgrossIncome}{for details, see Eurostat's code book}
\item{hgrossIncomeCat}{for details, see Eurostat's code book}
\item{hgrossIncome}{for details, see Eurostat's code book}
\item{hgrossminusCat}{for details, see Eurostat's code book}
\item{hgrossminus}{for details, see Eurostat's code book}
\item{py010g}{for details, see Eurostat's code book}
\item{py021g}{for details, see Eurostat's code book}
\item{py050g}{for details, see Eurostat's code book}
\item{py080g}{for details, see Eurostat's code book}
\item{py090g}{for details, see Eurostat's code book}
\item{py100g}{for details, see Eurostat's code book}
\item{py110g}{for details, see Eurostat's code book}
\item{py120g}{for details, see Eurostat's code book}
\item{py130g}{for details, see Eurostat's code book}
\item{py140g}{for details, see Eurostat's code book}
\item{hy040g}{for details, see Eurostat's code book}
\item{hy050g}{for details, see Eurostat's code book}
\item{hy060g}{for details, see Eurostat's code book}
\item{hy070g}{for details, see Eurostat's code book}
\item{hy080g}{for details, see Eurostat's code book}
\item{hy090g}{for details, see Eurostat's code book}
\item{hy100g}{for details, see Eurostat's code book}
\item{hy110g}{for details, see Eurostat's code book}
\item{hy120g}{for details, see Eurostat's code book}
\item{hy130g}{for details, see Eurostat's code book}
\item{hy140g}{for details, see Eurostat's code book}
\item{rb250}{for details, see Eurostat's code book}
\item{p119000}{for details, see Eurostat's code book}
\item{p038003f}{for details, see Eurostat's code book}
\item{p118000i}{for details, see Eurostat's code book}
\item{aktivi}{for details, see Eurostat's code book}
\item{erwintensneu}{for details, see Eurostat's code book}
\item{rb050}{for details, see Eurostat's code book}
\item{pb040}{for details, see Eurostat's code book}
\item{hb030}{for details, see Eurostat's code book}
\item{px030}{for details, see Eurostat's code book}
\item{rx030}{for details, see Eurostat's code book}
\item{pb030}{for details, see Eurostat's code book}
\item{rb030}{for details, see Eurostat's code book}
\item{hx040}{for details, see Eurostat's code book}
\item{pb150}{for details, see Eurostat's code book}
\item{rx020}{for details, see Eurostat's code book}
\item{px020}{for details, see Eurostat's code book}
\item{hx050}{for details, see Eurostat's code book}
\item{eqInc}{for details, see Eurostat's code book}
\item{hy010}{for details, see Eurostat's code book}
\item{hy020}{for details, see Eurostat's code book}
\item{hy022}{for details, see Eurostat's code book}
\item{hy023}{for details, see Eurostat's code book}
}
}
\source{
This is a synthetic data set based on Austrian EU-SILC data from
2013.  The original sample was provided by Statistics Austria.
}
\description{
This data set is synthetically generated from real Austrian EU-SILC
(European Union Statistics on Income and Living Conditions) data 2013.
}
\details{
The data set consists of 5977 households and is used as sample data in some
of the examples in package \code{simPop}.  Note that it is included
for illustrative purposes only.  The sample weights do not reflect the true
population sizes of Austria and its regions.

62 variables of the original survey are
simulated for this example data set.  The variable names are rather cryptic
codes, but these are the standardized names used by the statistical
agencies.  Furthermore, the variables \code{hsize}, \code{age} and
\code{netIncome} are not included in the standardized format of EU-SILC
data, but have been derived from other variables for convenience.
}
\examples{
data(eusilc13puf)
str(eusilc13puf)
}
\references{
Eurostat (2013) Description of target variables: Cross-sectional
and longitudinal.
}
\author{
Matthias Templ
}
\keyword{datasets}

% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/classes.R
\docType{class}
\name{hce-class}
\alias{hce-class}
\title{The \code{hce} class}
\description{
Used internally.
}
\section{Slots}{

\describe{
\item{\code{voronoi}}{The Voronoi tessellation of the patches and resistance
surface (\code{RasterLayer}).}

\item{\code{patchLinks}}{A \code{RasterLayer} whose values indicate patch ids
(positive integers) and link ids (negative integers).}

\item{\code{linkData}}{A \code{data.frame} of link attributes.}
}}

\author{
Alex Chubaty and Sam Doctolero
}
\keyword{internal}

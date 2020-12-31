// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// computeMSPEcpp
NumericVector computeMSPEcpp(NumericVector X, NumericVector coef, int h, IntegerVector t, int type, double trimLo, double trimUp);
RcppExport SEXP _forecastSNSTS_computeMSPEcpp(SEXP XSEXP, SEXP coefSEXP, SEXP hSEXP, SEXP tSEXP, SEXP typeSEXP, SEXP trimLoSEXP, SEXP trimUpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type trimLo(trimLoSEXP);
    Rcpp::traits::input_parameter< double >::type trimUp(trimUpSEXP);
    rcpp_result_gen = Rcpp::wrap(computeMSPEcpp(X, coef, h, t, type, trimLo, trimUp));
    return rcpp_result_gen;
END_RCPP
}
// predCoef
List predCoef(NumericVector X, int P, int H, IntegerVector t, IntegerVector N);
RcppExport SEXP _forecastSNSTS_predCoef(SEXP XSEXP, SEXP PSEXP, SEXP HSEXP, SEXP tSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type H(HSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(predCoef(X, P, H, t, N));
    return rcpp_result_gen;
END_RCPP
}
// tvARMAcpp
NumericVector tvARMAcpp(NumericVector z, NumericVector x_init, NumericMatrix A, NumericMatrix B, NumericVector Sigma);
RcppExport SEXP _forecastSNSTS_tvARMAcpp(SEXP zSEXP, SEXP x_initSEXP, SEXP ASEXP, SEXP BSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_init(x_initSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(tvARMAcpp(z, x_init, A, B, Sigma));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_forecastSNSTS_computeMSPEcpp", (DL_FUNC) &_forecastSNSTS_computeMSPEcpp, 7},
    {"_forecastSNSTS_predCoef", (DL_FUNC) &_forecastSNSTS_predCoef, 5},
    {"_forecastSNSTS_tvARMAcpp", (DL_FUNC) &_forecastSNSTS_tvARMAcpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_forecastSNSTS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
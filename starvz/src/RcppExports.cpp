// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// integrateStepFunc
NumericVector integrateStepFunc(NumericVector x, NumericVector bounds, NumericVector values);
RcppExport SEXP _starvz_integrateStepFunc(SEXP xSEXP, SEXP boundsSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bounds(boundsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(integrateStepFunc(x, bounds, values));
    return rcpp_result_gen;
END_RCPP
}
// boost_shortest_path
NumericVector boost_shortest_path(int s, DataFrame df);
RcppExport SEXP _starvz_boost_shortest_path(SEXP sSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(boost_shortest_path(s, df));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_starvz_integrateStepFunc", (DL_FUNC) &_starvz_integrateStepFunc, 3},
    {"_starvz_boost_shortest_path", (DL_FUNC) &_starvz_boost_shortest_path, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_starvz(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

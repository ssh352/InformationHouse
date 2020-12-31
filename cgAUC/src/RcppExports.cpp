// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// c_s_h
double c_s_h(double t, double h);
RcppExport SEXP _cgAUC_c_s_h(SEXP tSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(c_s_h(t, h));
    return rcpp_result_gen;
END_RCPP
}
// c_dscrt
/* theta_sh_0 */ NumericVector c_dscrt(NumericMatrix y, NumericVector z, NumericVector l);
RcppExport SEXP _cgAUC_c_dscrt(SEXP ySEXP, SEXP zSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(c_dscrt(y, z, l));
    return rcpp_result_gen;
END_RCPP
}
// c_cntin
/*  theta_sh */ NumericVector c_cntin(NumericMatrix y, NumericVector z, NumericVector l, double h);
RcppExport SEXP _cgAUC_c_cntin(SEXP ySEXP, SEXP zSEXP, SEXP lSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(c_cntin(y, z, l, h));
    return rcpp_result_gen;
END_RCPP
}
// c_d_theta_sh_h_p
/* step 1 */ NumericVector c_d_theta_sh_h_p(NumericMatrix y, NumericVector z, NumericVector l, double h);
RcppExport SEXP _cgAUC_c_d_theta_sh_h_p(SEXP ySEXP, SEXP zSEXP, SEXP lSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(c_d_theta_sh_h_p(y, z, l, h));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cgAUC_c_s_h", (DL_FUNC) &_cgAUC_c_s_h, 2},
    {"_cgAUC_c_dscrt", (DL_FUNC) &_cgAUC_c_dscrt, 3},
    {"_cgAUC_c_cntin", (DL_FUNC) &_cgAUC_c_cntin, 4},
    {"_cgAUC_c_d_theta_sh_h_p", (DL_FUNC) &_cgAUC_c_d_theta_sh_h_p, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_cgAUC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
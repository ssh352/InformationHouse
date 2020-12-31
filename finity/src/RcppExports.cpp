// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_chisq1_percentile
double get_chisq1_percentile(double value);
RcppExport SEXP _finity_get_chisq1_percentile(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(get_chisq1_percentile(value));
    return rcpp_result_gen;
END_RCPP
}
// compute_absolute_moment
double compute_absolute_moment(arma::vec obs, double k);
RcppExport SEXP _finity_compute_absolute_moment(SEXP obsSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_absolute_moment(obs, k));
    return rcpp_result_gen;
END_RCPP
}
// finite_moment_test
arma::vec finite_moment_test(arma::vec obs, double k, unsigned int r, double psi, double u, bool force_random_variate_sample, bool ignore_errors, bool verbose, int random_salting);
RcppExport SEXP _finity_finite_moment_test(SEXP obsSEXP, SEXP kSEXP, SEXP rSEXP, SEXP psiSEXP, SEXP uSEXP, SEXP force_random_variate_sampleSEXP, SEXP ignore_errorsSEXP, SEXP verboseSEXP, SEXP random_saltingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< double >::type u(uSEXP);
    Rcpp::traits::input_parameter< bool >::type force_random_variate_sample(force_random_variate_sampleSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_errors(ignore_errorsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type random_salting(random_saltingSEXP);
    rcpp_result_gen = Rcpp::wrap(finite_moment_test(obs, k, r, psi, u, force_random_variate_sample, ignore_errors, verbose, random_salting));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_finity_get_chisq1_percentile", (DL_FUNC) &_finity_get_chisq1_percentile, 1},
    {"_finity_compute_absolute_moment", (DL_FUNC) &_finity_compute_absolute_moment, 2},
    {"_finity_finite_moment_test", (DL_FUNC) &_finity_finite_moment_test, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_finity(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
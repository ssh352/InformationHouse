// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bmat_schC
NumericMatrix bmat_schC(double v1, double v2, double v3, NumericVector section_counts);
RcppExport SEXP _rlme_bmat_schC(SEXP v1SEXP, SEXP v2SEXP, SEXP v3SEXP, SEXP section_countsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< double >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< double >::type v3(v3SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type section_counts(section_countsSEXP);
    rcpp_result_gen = Rcpp::wrap(bmat_schC(v1, v2, v3, section_counts));
    return rcpp_result_gen;
END_RCPP
}
// bmat2C
NumericVector bmat2C(double v1, double v2, NumericVector sec);
RcppExport SEXP _rlme_bmat2C(SEXP v1SEXP, SEXP v2SEXP, SEXP secSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< double >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sec(secSEXP);
    rcpp_result_gen = Rcpp::wrap(bmat2C(v1, v2, sec));
    return rcpp_result_gen;
END_RCPP
}
// pairup
NumericMatrix pairup(NumericVector vec, String type);
RcppExport SEXP _rlme_pairup(SEXP vecSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< String >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(pairup(vec, type));
    return rcpp_result_gen;
END_RCPP
}
// remove_k_smallest
NumericVector remove_k_smallest(NumericVector v, int k);
RcppExport SEXP _rlme_remove_k_smallest(SEXP vSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_k_smallest(v, k));
    return rcpp_result_gen;
END_RCPP
}
// rhoschC
List rhoschC(NumericVector ahat, NumericVector section_counts, NumericMatrix student_counts);
RcppExport SEXP _rlme_rhoschC(SEXP ahatSEXP, SEXP section_countsSEXP, SEXP student_countsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ahat(ahatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type section_counts(section_countsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type student_counts(student_countsSEXP);
    rcpp_result_gen = Rcpp::wrap(rhoschC(ahat, section_counts, student_counts));
    return rcpp_result_gen;
END_RCPP
}
// rhosectC
List rhosectC(NumericVector ahat, NumericVector section_counts, NumericMatrix student_counts);
RcppExport SEXP _rlme_rhosectC(SEXP ahatSEXP, SEXP section_countsSEXP, SEXP student_countsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ahat(ahatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type section_counts(section_countsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type student_counts(student_countsSEXP);
    rcpp_result_gen = Rcpp::wrap(rhosectC(ahat, section_counts, student_counts));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rlme_bmat_schC", (DL_FUNC) &_rlme_bmat_schC, 4},
    {"_rlme_bmat2C", (DL_FUNC) &_rlme_bmat2C, 3},
    {"_rlme_pairup", (DL_FUNC) &_rlme_pairup, 2},
    {"_rlme_remove_k_smallest", (DL_FUNC) &_rlme_remove_k_smallest, 2},
    {"_rlme_rhoschC", (DL_FUNC) &_rlme_rhoschC, 3},
    {"_rlme_rhosectC", (DL_FUNC) &_rlme_rhosectC, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rlme(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

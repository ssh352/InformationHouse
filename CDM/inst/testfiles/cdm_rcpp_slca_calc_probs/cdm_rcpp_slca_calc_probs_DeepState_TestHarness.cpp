// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cdm_rcpp_slca_calc_probs_DeepState_TestHarness_generation.cpp and cdm_rcpp_slca_calc_probs_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector cdm_rcpp_slca_calc_probs(Rcpp::NumericMatrix XdesM, Rcpp::NumericVector dimXdes, Rcpp::NumericVector Xlambda);

TEST(CDM_deepstate_test,cdm_rcpp_slca_calc_probs_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix XdesM  = RcppDeepState_NumericMatrix();
  qs::c_qsave(XdesM,"/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_slca_calc_probs/inputs/XdesM.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "XdesM values: "<< XdesM << std::endl;
  NumericVector dimXdes  = RcppDeepState_NumericVector();
  qs::c_qsave(dimXdes,"/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_slca_calc_probs/inputs/dimXdes.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dimXdes values: "<< dimXdes << std::endl;
  NumericVector Xlambda  = RcppDeepState_NumericVector();
  qs::c_qsave(Xlambda,"/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_slca_calc_probs/inputs/Xlambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Xlambda values: "<< Xlambda << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cdm_rcpp_slca_calc_probs(XdesM,dimXdes,Xlambda);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
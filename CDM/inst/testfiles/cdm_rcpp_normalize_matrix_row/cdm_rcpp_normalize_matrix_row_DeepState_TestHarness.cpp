// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cdm_rcpp_normalize_matrix_row_DeepState_TestHarness_generation.cpp and cdm_rcpp_normalize_matrix_row_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericMatrix cdm_rcpp_normalize_matrix_row(Rcpp::NumericMatrix x);

TEST(CDM_deepstate_test,cdm_rcpp_normalize_matrix_row_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_normalize_matrix_row/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cdm_rcpp_normalize_matrix_row(x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

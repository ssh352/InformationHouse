// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cdm_rcpp_irt_classify_individuals_DeepState_TestHarness_generation.cpp and cdm_rcpp_irt_classify_individuals_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List cdm_rcpp_irt_classify_individuals(Rcpp::NumericMatrix like);

TEST(CDM_deepstate_test,cdm_rcpp_irt_classify_individuals_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix like  = RcppDeepState_NumericMatrix();
  qs::c_qsave(like,"/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_irt_classify_individuals/inputs/like.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "like values: "<< like << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cdm_rcpp_irt_classify_individuals(like);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
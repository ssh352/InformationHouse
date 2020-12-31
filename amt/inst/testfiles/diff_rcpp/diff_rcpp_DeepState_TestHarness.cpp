// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// diff_rcpp_DeepState_TestHarness_generation.cpp and diff_rcpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector diff_rcpp(NumericVector xs);

TEST(amt_deepstate_test,diff_rcpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector xs  = RcppDeepState_NumericVector();
  qs::c_qsave(xs,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/diff_rcpp/inputs/xs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xs values: "<< xs << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    diff_rcpp(xs);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

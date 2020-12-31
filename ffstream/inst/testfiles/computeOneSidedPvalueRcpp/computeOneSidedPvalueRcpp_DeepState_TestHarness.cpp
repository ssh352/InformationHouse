// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// computeOneSidedPvalueRcpp_DeepState_TestHarness_generation.cpp and computeOneSidedPvalueRcpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector computeOneSidedPvalueRcpp(Rcpp::NumericVector x_, Rcpp::NumericVector a_, Rcpp::NumericVector b_);

TEST(ffstream_deepstate_test,computeOneSidedPvalueRcpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x_  = RcppDeepState_NumericVector();
  qs::c_qsave(x_,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/computeOneSidedPvalueRcpp/inputs/x_.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_ values: "<< x_ << std::endl;
  NumericVector a_  = RcppDeepState_NumericVector();
  qs::c_qsave(a_,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/computeOneSidedPvalueRcpp/inputs/a_.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a_ values: "<< a_ << std::endl;
  NumericVector b_  = RcppDeepState_NumericVector();
  qs::c_qsave(b_,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/computeOneSidedPvalueRcpp/inputs/b_.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b_ values: "<< b_ << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    computeOneSidedPvalueRcpp(x_,a_,b_);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

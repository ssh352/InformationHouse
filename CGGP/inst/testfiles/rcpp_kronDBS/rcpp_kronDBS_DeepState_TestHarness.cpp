// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// rcpp_kronDBS_DeepState_TestHarness_generation.cpp and rcpp_kronDBS_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void rcpp_kronDBS(NumericVector A, NumericVector B, NumericVector p);

TEST(CGGP_deepstate_test,rcpp_kronDBS_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector A  = RcppDeepState_NumericVector();
  qs::c_qsave(A,"/home/akhila/fuzzer_packages/fuzzedpackages/CGGP/inst/testfiles/rcpp_kronDBS/inputs/A.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "A values: "<< A << std::endl;
  NumericVector B  = RcppDeepState_NumericVector();
  qs::c_qsave(B,"/home/akhila/fuzzer_packages/fuzzedpackages/CGGP/inst/testfiles/rcpp_kronDBS/inputs/B.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "B values: "<< B << std::endl;
  NumericVector p  = RcppDeepState_NumericVector();
  qs::c_qsave(p,"/home/akhila/fuzzer_packages/fuzzedpackages/CGGP/inst/testfiles/rcpp_kronDBS/inputs/p.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p values: "<< p << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    rcpp_kronDBS(A,B,p);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

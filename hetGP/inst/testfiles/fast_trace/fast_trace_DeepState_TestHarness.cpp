// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fast_trace_DeepState_TestHarness_generation.cpp and fast_trace_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double fast_trace(NumericMatrix A, NumericMatrix B);

TEST(hetGP_deepstate_test,fast_trace_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix A  = RcppDeepState_NumericMatrix();
  qs::c_qsave(A,"/home/akhila/fuzzer_packages/fuzzedpackages/hetGP/inst/testfiles/fast_trace/inputs/A.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "A values: "<< A << std::endl;
  NumericMatrix B  = RcppDeepState_NumericMatrix();
  qs::c_qsave(B,"/home/akhila/fuzzer_packages/fuzzedpackages/hetGP/inst/testfiles/fast_trace/inputs/B.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "B values: "<< B << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fast_trace(A,B);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

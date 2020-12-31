// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// smuce_cpp_DeepState_TestHarness_generation.cpp and smuce_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List smuce_cpp(NumericVector Y, double q, double sd);

TEST(FDRSeg_deepstate_test,smuce_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector Y  = RcppDeepState_NumericVector();
  qs::c_qsave(Y,"/home/akhila/fuzzer_packages/fuzzedpackages/FDRSeg/inst/testfiles/smuce_cpp/inputs/Y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Y values: "<< Y << std::endl;
  NumericVector q(1);
  q[0]  = RcppDeepState_double();
  qs::c_qsave(q,"/home/akhila/fuzzer_packages/fuzzedpackages/FDRSeg/inst/testfiles/smuce_cpp/inputs/q.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "q values: "<< q << std::endl;
  NumericVector sd(1);
  sd[0]  = RcppDeepState_double();
  qs::c_qsave(sd,"/home/akhila/fuzzer_packages/fuzzedpackages/FDRSeg/inst/testfiles/smuce_cpp/inputs/sd.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sd values: "<< sd << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    smuce_cpp(Y,q[0],sd[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
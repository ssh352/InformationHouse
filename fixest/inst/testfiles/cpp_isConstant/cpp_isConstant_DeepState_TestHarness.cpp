// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_isConstant_DeepState_TestHarness_generation.cpp and cpp_isConstant_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

bool cpp_isConstant(NumericVector x);

TEST(fixest_deepstate_test,cpp_isConstant_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/fixest/inst/testfiles/cpp_isConstant/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_isConstant(x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
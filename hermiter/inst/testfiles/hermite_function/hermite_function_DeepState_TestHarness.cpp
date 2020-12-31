// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// hermite_function_DeepState_TestHarness_generation.cpp and hermite_function_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix hermite_function(int N, NumericVector x, NumericVector normalization);

TEST(hermiter_deepstate_test,hermite_function_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector N(1);
  N[0]  = RcppDeepState_int();
  qs::c_qsave(N,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/hermite_function/inputs/N.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "N values: "<< N << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/hermite_function/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector normalization  = RcppDeepState_NumericVector();
  qs::c_qsave(normalization,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/hermite_function/inputs/normalization.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "normalization values: "<< normalization << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    hermite_function(N[0],x,normalization);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
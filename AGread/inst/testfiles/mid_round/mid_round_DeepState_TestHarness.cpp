// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mid_round_DeepState_TestHarness_generation.cpp and mid_round_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double mid_round(double input, int digits);

TEST(AGread_deepstate_test,mid_round_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector input(1);
  input[0]  = RcppDeepState_double();
  qs::c_qsave(input,"/home/akhila/fuzzer_packages/fuzzedpackages/AGread/inst/testfiles/mid_round/inputs/input.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "input values: "<< input << std::endl;
  IntegerVector digits(1);
  digits[0]  = RcppDeepState_int();
  qs::c_qsave(digits,"/home/akhila/fuzzer_packages/fuzzedpackages/AGread/inst/testfiles/mid_round/inputs/digits.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "digits values: "<< digits << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mid_round(input[0],digits[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
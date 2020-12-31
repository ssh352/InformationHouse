// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Which_Max_C_DeepState_TestHarness_generation.cpp and Which_Max_C_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int Which_Max_C(NumericVector x);

TEST(BoostMLR_deepstate_test,Which_Max_C_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/BoostMLR/inst/testfiles/Which_Max_C/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    Which_Max_C(x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

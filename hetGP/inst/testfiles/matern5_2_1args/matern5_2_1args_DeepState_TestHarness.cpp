// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// matern5_2_1args_DeepState_TestHarness_generation.cpp and matern5_2_1args_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix matern5_2_1args(NumericMatrix X1);

TEST(hetGP_deepstate_test,matern5_2_1args_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix X1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(X1,"/home/akhila/fuzzer_packages/fuzzedpackages/hetGP/inst/testfiles/matern5_2_1args/inputs/X1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X1 values: "<< X1 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    matern5_2_1args(X1);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

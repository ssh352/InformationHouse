// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// UpWhet_DeepState_TestHarness_generation.cpp and UpWhet_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector UpWhet(NumericMatrix z_hat, NumericVector alpha0);

TEST(PLMIX_deepstate_test,UpWhet_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix z_hat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(z_hat,"/home/akhila/fuzzer_packages/fuzzedpackages/PLMIX/inst/testfiles/UpWhet/inputs/z_hat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z_hat values: "<< z_hat << std::endl;
  NumericVector alpha0  = RcppDeepState_NumericVector();
  qs::c_qsave(alpha0,"/home/akhila/fuzzer_packages/fuzzedpackages/PLMIX/inst/testfiles/UpWhet/inputs/alpha0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha0 values: "<< alpha0 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    UpWhet(z_hat,alpha0);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// exp_sideeffect_DeepState_TestHarness_generation.cpp and exp_sideeffect_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector exp_sideeffect(NumericVector p);

TEST(bnclassify_deepstate_test,exp_sideeffect_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector p  = RcppDeepState_NumericVector();
  qs::c_qsave(p,"/home/akhila/fuzzer_packages/fuzzedpackages/bnclassify/inst/testfiles/exp_sideeffect/inputs/p.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p values: "<< p << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    exp_sideeffect(p);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
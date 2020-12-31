// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// smooth_sideeffect_DeepState_TestHarness_generation.cpp and smooth_sideeffect_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector smooth_sideeffect(NumericVector ctgt, double smooth);

TEST(bnclassify_deepstate_test,smooth_sideeffect_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector ctgt  = RcppDeepState_NumericVector();
  qs::c_qsave(ctgt,"/home/akhila/fuzzer_packages/fuzzedpackages/bnclassify/inst/testfiles/smooth_sideeffect/inputs/ctgt.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ctgt values: "<< ctgt << std::endl;
  NumericVector smooth(1);
  smooth[0]  = RcppDeepState_double();
  qs::c_qsave(smooth,"/home/akhila/fuzzer_packages/fuzzedpackages/bnclassify/inst/testfiles/smooth_sideeffect/inputs/smooth.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "smooth values: "<< smooth << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    smooth_sideeffect(ctgt,smooth[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// varFunc_DeepState_TestHarness_generation.cpp and varFunc_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List varFunc(NumericMatrix af, double sHarm);

TEST(diveRsity_deepstate_test,varFunc_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix af  = RcppDeepState_NumericMatrix();
  qs::c_qsave(af,"/home/akhila/fuzzer_packages/fuzzedpackages/diveRsity/inst/testfiles/varFunc/inputs/af.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "af values: "<< af << std::endl;
  NumericVector sHarm(1);
  sHarm[0]  = RcppDeepState_double();
  qs::c_qsave(sHarm,"/home/akhila/fuzzer_packages/fuzzedpackages/diveRsity/inst/testfiles/varFunc/inputs/sHarm.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sHarm values: "<< sHarm << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    varFunc(af,sHarm[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

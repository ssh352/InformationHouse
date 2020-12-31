// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// crtTest_DeepState_TestHarness_generation.cpp and crtTest_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double crtTest(double test);

TEST(psrwe_deepstate_test,crtTest_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector test(1);
  test[0]  = RcppDeepState_double();
  qs::c_qsave(test,"/home/akhila/fuzzer_packages/fuzzedpackages/psrwe/inst/testfiles/crtTest/inputs/test.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "test values: "<< test << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    crtTest(test[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Plus_DeepState_TestHarness_generation.cpp and Plus_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix Plus(NumericMatrix M1, NumericMatrix M2);

TEST(Opt5PL_deepstate_test,Plus_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix M1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(M1,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/Plus/inputs/M1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "M1 values: "<< M1 << std::endl;
  NumericMatrix M2  = RcppDeepState_NumericMatrix();
  qs::c_qsave(M2,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/Plus/inputs/M2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "M2 values: "<< M2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    Plus(M1,M2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
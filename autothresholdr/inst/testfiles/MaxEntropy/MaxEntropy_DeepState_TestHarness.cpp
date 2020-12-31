// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// MaxEntropy_DeepState_TestHarness_generation.cpp and MaxEntropy_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int MaxEntropy(IntegerVector data);

TEST(autothresholdr_deepstate_test,MaxEntropy_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector data  = RcppDeepState_IntegerVector();
  qs::c_qsave(data,"/home/akhila/fuzzer_packages/fuzzedpackages/autothresholdr/inst/testfiles/MaxEntropy/inputs/data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "data values: "<< data << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    MaxEntropy(data);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

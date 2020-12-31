// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// secondKindStirlingNumber_DeepState_TestHarness_generation.cpp and secondKindStirlingNumber_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double secondKindStirlingNumber(int n, int k);

TEST(bartBMA_deepstate_test,secondKindStirlingNumber_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector n(1);
  n[0]  = RcppDeepState_int();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/secondKindStirlingNumber/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  IntegerVector k(1);
  k[0]  = RcppDeepState_int();
  qs::c_qsave(k,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/secondKindStirlingNumber/inputs/k.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "k values: "<< k << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    secondKindStirlingNumber(n[0],k[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

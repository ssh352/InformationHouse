// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pair_sort_DeepState_TestHarness_generation.cpp and pair_sort_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void pair_sort(IntegerVector i, NumericVector x);

TEST(FeatureHashing_deepstate_test,pair_sort_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector i  = RcppDeepState_IntegerVector();
  qs::c_qsave(i,"/home/akhila/fuzzer_packages/fuzzedpackages/FeatureHashing/inst/testfiles/pair_sort/inputs/i.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "i values: "<< i << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/FeatureHashing/inst/testfiles/pair_sort/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pair_sort(i,x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
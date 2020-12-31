// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// concatenate_and_sort_DeepState_TestHarness_generation.cpp and concatenate_and_sort_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector concatenate_and_sort(NumericVector a, NumericVector b);

TEST(HistDAWass_deepstate_test,concatenate_and_sort_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector a  = RcppDeepState_NumericVector();
  qs::c_qsave(a,"/home/akhila/fuzzer_packages/fuzzedpackages/HistDAWass/inst/testfiles/concatenate_and_sort/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  NumericVector b  = RcppDeepState_NumericVector();
  qs::c_qsave(b,"/home/akhila/fuzzer_packages/fuzzedpackages/HistDAWass/inst/testfiles/concatenate_and_sort/inputs/b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    concatenate_and_sort(a,b);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
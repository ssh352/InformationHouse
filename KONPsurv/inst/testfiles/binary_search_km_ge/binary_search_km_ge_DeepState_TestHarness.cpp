// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// binary_search_km_ge_DeepState_TestHarness_generation.cpp and binary_search_km_ge_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int binary_search_km_ge(NumericVector array, double pattern);

TEST(KONPsurv_deepstate_test,binary_search_km_ge_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector array  = RcppDeepState_NumericVector();
  qs::c_qsave(array,"/home/akhila/fuzzer_packages/fuzzedpackages/KONPsurv/inst/testfiles/binary_search_km_ge/inputs/array.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "array values: "<< array << std::endl;
  NumericVector pattern(1);
  pattern[0]  = RcppDeepState_double();
  qs::c_qsave(pattern,"/home/akhila/fuzzer_packages/fuzzedpackages/KONPsurv/inst/testfiles/binary_search_km_ge/inputs/pattern.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pattern values: "<< pattern << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    binary_search_km_ge(array,pattern[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

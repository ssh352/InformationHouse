// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// min_which2_DeepState_TestHarness_generation.cpp and min_which2_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List min_which2(NumericVector array, int n, double minout, int whichout);

TEST(bartBMA_deepstate_test,min_which2_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector array  = RcppDeepState_NumericVector();
  qs::c_qsave(array,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/min_which2/inputs/array.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "array values: "<< array << std::endl;
  IntegerVector n(1);
  n[0]  = RcppDeepState_int();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/min_which2/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  NumericVector minout(1);
  minout[0]  = RcppDeepState_double();
  qs::c_qsave(minout,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/min_which2/inputs/minout.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "minout values: "<< minout << std::endl;
  IntegerVector whichout(1);
  whichout[0]  = RcppDeepState_int();
  qs::c_qsave(whichout,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/min_which2/inputs/whichout.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "whichout values: "<< whichout << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    min_which2(array,n[0],minout[0],whichout[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
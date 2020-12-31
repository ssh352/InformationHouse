// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get_cached_perf_DeepState_TestHarness_generation.cpp and get_cached_perf_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector get_cached_perf(NumericMatrix tpr, NumericMatrix fpr, NumericVector param, int measure);

TEST(fbroc_deepstate_test,get_cached_perf_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix tpr  = RcppDeepState_NumericMatrix();
  qs::c_qsave(tpr,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_cached_perf/inputs/tpr.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tpr values: "<< tpr << std::endl;
  NumericMatrix fpr  = RcppDeepState_NumericMatrix();
  qs::c_qsave(fpr,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_cached_perf/inputs/fpr.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fpr values: "<< fpr << std::endl;
  NumericVector param  = RcppDeepState_NumericVector();
  qs::c_qsave(param,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_cached_perf/inputs/param.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "param values: "<< param << std::endl;
  IntegerVector measure(1);
  measure[0]  = RcppDeepState_int();
  qs::c_qsave(measure,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_cached_perf/inputs/measure.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "measure values: "<< measure << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_cached_perf(tpr,fpr,param,measure[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
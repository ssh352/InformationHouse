// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// npv__DeepState_TestHarness_generation.cpp and npv__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double npv_(NumericVector actual, NumericVector predicted, double cutoff);

TEST(ModelMetrics_deepstate_test,npv__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector actual  = RcppDeepState_NumericVector();
  qs::c_qsave(actual,"/home/akhila/fuzzer_packages/fuzzedpackages/ModelMetrics/inst/testfiles/npv_/inputs/actual.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "actual values: "<< actual << std::endl;
  NumericVector predicted  = RcppDeepState_NumericVector();
  qs::c_qsave(predicted,"/home/akhila/fuzzer_packages/fuzzedpackages/ModelMetrics/inst/testfiles/npv_/inputs/predicted.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "predicted values: "<< predicted << std::endl;
  NumericVector cutoff(1);
  cutoff[0]  = RcppDeepState_double();
  qs::c_qsave(cutoff,"/home/akhila/fuzzer_packages/fuzzedpackages/ModelMetrics/inst/testfiles/npv_/inputs/cutoff.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cutoff values: "<< cutoff << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    npv_(actual,predicted,cutoff[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
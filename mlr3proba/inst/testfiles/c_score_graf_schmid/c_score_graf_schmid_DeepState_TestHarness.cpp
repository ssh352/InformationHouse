// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// c_score_graf_schmid_DeepState_TestHarness_generation.cpp and c_score_graf_schmid_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix c_score_graf_schmid(NumericVector truth, NumericVector unique_times, NumericMatrix cdf, int power);

TEST(mlr3proba_deepstate_test,c_score_graf_schmid_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector truth  = RcppDeepState_NumericVector();
  qs::c_qsave(truth,"/home/akhila/fuzzer_packages/fuzzedpackages/mlr3proba/inst/testfiles/c_score_graf_schmid/inputs/truth.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "truth values: "<< truth << std::endl;
  NumericVector unique_times  = RcppDeepState_NumericVector();
  qs::c_qsave(unique_times,"/home/akhila/fuzzer_packages/fuzzedpackages/mlr3proba/inst/testfiles/c_score_graf_schmid/inputs/unique_times.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "unique_times values: "<< unique_times << std::endl;
  NumericMatrix cdf  = RcppDeepState_NumericMatrix();
  qs::c_qsave(cdf,"/home/akhila/fuzzer_packages/fuzzedpackages/mlr3proba/inst/testfiles/c_score_graf_schmid/inputs/cdf.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cdf values: "<< cdf << std::endl;
  IntegerVector power(1);
  power[0]  = RcppDeepState_int();
  qs::c_qsave(power,"/home/akhila/fuzzer_packages/fuzzedpackages/mlr3proba/inst/testfiles/c_score_graf_schmid/inputs/power.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "power values: "<< power << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    c_score_graf_schmid(truth,unique_times,cdf,power[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

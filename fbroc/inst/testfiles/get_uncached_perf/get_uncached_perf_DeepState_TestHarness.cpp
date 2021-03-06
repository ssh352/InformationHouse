// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get_uncached_perf_DeepState_TestHarness_generation.cpp and get_uncached_perf_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector get_uncached_perf(NumericVector pred, IntegerVector true_class, NumericVector param, int n_boot, int measure);

TEST(fbroc_deepstate_test,get_uncached_perf_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector pred  = RcppDeepState_NumericVector();
  qs::c_qsave(pred,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_uncached_perf/inputs/pred.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pred values: "<< pred << std::endl;
  IntegerVector true_class  = RcppDeepState_IntegerVector();
  qs::c_qsave(true_class,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_uncached_perf/inputs/true_class.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "true_class values: "<< true_class << std::endl;
  NumericVector param  = RcppDeepState_NumericVector();
  qs::c_qsave(param,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_uncached_perf/inputs/param.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "param values: "<< param << std::endl;
  IntegerVector n_boot(1);
  n_boot[0]  = RcppDeepState_int();
  qs::c_qsave(n_boot,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_uncached_perf/inputs/n_boot.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_boot values: "<< n_boot << std::endl;
  IntegerVector measure(1);
  measure[0]  = RcppDeepState_int();
  qs::c_qsave(measure,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/get_uncached_perf/inputs/measure.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "measure values: "<< measure << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_uncached_perf(pred,true_class,param,n_boot[0],measure[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

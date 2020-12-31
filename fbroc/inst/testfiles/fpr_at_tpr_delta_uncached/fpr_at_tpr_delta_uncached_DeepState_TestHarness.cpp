// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fpr_at_tpr_delta_uncached_DeepState_TestHarness_generation.cpp and fpr_at_tpr_delta_uncached_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix fpr_at_tpr_delta_uncached(NumericVector pred1, NumericVector pred2, IntegerVector true_class, int n_boot, int n_steps);

TEST(fbroc_deepstate_test,fpr_at_tpr_delta_uncached_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector pred1  = RcppDeepState_NumericVector();
  qs::c_qsave(pred1,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/fpr_at_tpr_delta_uncached/inputs/pred1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pred1 values: "<< pred1 << std::endl;
  NumericVector pred2  = RcppDeepState_NumericVector();
  qs::c_qsave(pred2,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/fpr_at_tpr_delta_uncached/inputs/pred2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pred2 values: "<< pred2 << std::endl;
  IntegerVector true_class  = RcppDeepState_IntegerVector();
  qs::c_qsave(true_class,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/fpr_at_tpr_delta_uncached/inputs/true_class.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "true_class values: "<< true_class << std::endl;
  IntegerVector n_boot(1);
  n_boot[0]  = RcppDeepState_int();
  qs::c_qsave(n_boot,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/fpr_at_tpr_delta_uncached/inputs/n_boot.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_boot values: "<< n_boot << std::endl;
  IntegerVector n_steps(1);
  n_steps[0]  = RcppDeepState_int();
  qs::c_qsave(n_steps,"/home/akhila/fuzzer_packages/fuzzedpackages/fbroc/inst/testfiles/fpr_at_tpr_delta_uncached/inputs/n_steps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_steps values: "<< n_steps << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fpr_at_tpr_delta_uncached(pred1,pred2,true_class,n_boot[0],n_steps[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

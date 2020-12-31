// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get_imp_vars_DeepState_TestHarness_generation.cpp and get_imp_vars_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector get_imp_vars(NumericVector split_vars, int num_col, NumericVector current_vars);

TEST(bartBMA_deepstate_test,get_imp_vars_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector split_vars  = RcppDeepState_NumericVector();
  qs::c_qsave(split_vars,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/get_imp_vars/inputs/split_vars.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "split_vars values: "<< split_vars << std::endl;
  IntegerVector num_col(1);
  num_col[0]  = RcppDeepState_int();
  qs::c_qsave(num_col,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/get_imp_vars/inputs/num_col.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "num_col values: "<< num_col << std::endl;
  NumericVector current_vars  = RcppDeepState_NumericVector();
  qs::c_qsave(current_vars,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/get_imp_vars/inputs/current_vars.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "current_vars values: "<< current_vars << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_imp_vars(split_vars,num_col[0],current_vars);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

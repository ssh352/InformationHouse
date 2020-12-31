// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// update_predictions_DeepState_TestHarness_generation.cpp and update_predictions_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List update_predictions(NumericMatrix tree_table, NumericMatrix tree_matrix, NumericVector new_mean, int n);

TEST(bartBMA_deepstate_test,update_predictions_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix tree_table  = RcppDeepState_NumericMatrix();
  qs::c_qsave(tree_table,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_predictions/inputs/tree_table.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tree_table values: "<< tree_table << std::endl;
  NumericMatrix tree_matrix  = RcppDeepState_NumericMatrix();
  qs::c_qsave(tree_matrix,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_predictions/inputs/tree_matrix.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tree_matrix values: "<< tree_matrix << std::endl;
  NumericVector new_mean  = RcppDeepState_NumericVector();
  qs::c_qsave(new_mean,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_predictions/inputs/new_mean.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "new_mean values: "<< new_mean << std::endl;
  IntegerVector n(1);
  n[0]  = RcppDeepState_int();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_predictions/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    update_predictions(tree_table,tree_matrix,new_mean,n[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
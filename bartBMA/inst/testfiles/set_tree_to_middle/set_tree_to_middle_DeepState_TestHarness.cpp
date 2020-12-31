// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// set_tree_to_middle_DeepState_TestHarness_generation.cpp and set_tree_to_middle_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix set_tree_to_middle(NumericVector node_to_update, NumericMatrix prior_tree_table_temp, int grow_node, double left_daughter);

TEST(bartBMA_deepstate_test,set_tree_to_middle_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector node_to_update  = RcppDeepState_NumericVector();
  qs::c_qsave(node_to_update,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/set_tree_to_middle/inputs/node_to_update.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "node_to_update values: "<< node_to_update << std::endl;
  NumericMatrix prior_tree_table_temp  = RcppDeepState_NumericMatrix();
  qs::c_qsave(prior_tree_table_temp,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/set_tree_to_middle/inputs/prior_tree_table_temp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "prior_tree_table_temp values: "<< prior_tree_table_temp << std::endl;
  IntegerVector grow_node(1);
  grow_node[0]  = RcppDeepState_int();
  qs::c_qsave(grow_node,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/set_tree_to_middle/inputs/grow_node.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "grow_node values: "<< grow_node << std::endl;
  NumericVector left_daughter(1);
  left_daughter[0]  = RcppDeepState_double();
  qs::c_qsave(left_daughter,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/set_tree_to_middle/inputs/left_daughter.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "left_daughter values: "<< left_daughter << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    set_tree_to_middle(node_to_update,prior_tree_table_temp,grow_node[0],left_daughter[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
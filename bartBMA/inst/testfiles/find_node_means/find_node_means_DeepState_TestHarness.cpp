// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// find_node_means_DeepState_TestHarness_generation.cpp and find_node_means_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector find_node_means(NumericMatrix sum_tree, NumericVector term_nodes);

TEST(bartBMA_deepstate_test,find_node_means_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix sum_tree  = RcppDeepState_NumericMatrix();
  qs::c_qsave(sum_tree,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/find_node_means/inputs/sum_tree.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sum_tree values: "<< sum_tree << std::endl;
  NumericVector term_nodes  = RcppDeepState_NumericVector();
  qs::c_qsave(term_nodes,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/find_node_means/inputs/term_nodes.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "term_nodes values: "<< term_nodes << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    find_node_means(sum_tree,term_nodes);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
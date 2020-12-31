// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// update_grow_obs_DeepState_TestHarness_generation.cpp and update_grow_obs_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix update_grow_obs(NumericMatrix prior_tree_matrix_temp, double grow_node, double left_daughter, int d, NumericVector ld_obs, NumericVector rd_obs);

TEST(bartBMA_deepstate_test,update_grow_obs_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix prior_tree_matrix_temp  = RcppDeepState_NumericMatrix();
  qs::c_qsave(prior_tree_matrix_temp,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_grow_obs/inputs/prior_tree_matrix_temp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "prior_tree_matrix_temp values: "<< prior_tree_matrix_temp << std::endl;
  NumericVector grow_node(1);
  grow_node[0]  = RcppDeepState_double();
  qs::c_qsave(grow_node,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_grow_obs/inputs/grow_node.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "grow_node values: "<< grow_node << std::endl;
  NumericVector left_daughter(1);
  left_daughter[0]  = RcppDeepState_double();
  qs::c_qsave(left_daughter,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_grow_obs/inputs/left_daughter.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "left_daughter values: "<< left_daughter << std::endl;
  IntegerVector d(1);
  d[0]  = RcppDeepState_int();
  qs::c_qsave(d,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_grow_obs/inputs/d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "d values: "<< d << std::endl;
  NumericVector ld_obs  = RcppDeepState_NumericVector();
  qs::c_qsave(ld_obs,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_grow_obs/inputs/ld_obs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ld_obs values: "<< ld_obs << std::endl;
  NumericVector rd_obs  = RcppDeepState_NumericVector();
  qs::c_qsave(rd_obs,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/update_grow_obs/inputs/rd_obs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rd_obs values: "<< rd_obs << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    update_grow_obs(prior_tree_matrix_temp,grow_node[0],left_daughter[0],d[0],ld_obs,rd_obs);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
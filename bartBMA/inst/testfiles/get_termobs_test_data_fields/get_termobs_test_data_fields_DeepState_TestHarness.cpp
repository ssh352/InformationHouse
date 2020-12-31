// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get_termobs_test_data_fields_DeepState_TestHarness_generation.cpp and get_termobs_test_data_fields_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::field<arma::uvec> get_termobs_test_data_fields(NumericMatrix test_data, NumericMatrix tree_data);

TEST(bartBMA_deepstate_test,get_termobs_test_data_fields_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix test_data  = RcppDeepState_NumericMatrix();
  qs::c_qsave(test_data,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/get_termobs_test_data_fields/inputs/test_data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "test_data values: "<< test_data << std::endl;
  NumericMatrix tree_data  = RcppDeepState_NumericMatrix();
  qs::c_qsave(tree_data,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/get_termobs_test_data_fields/inputs/tree_data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tree_data values: "<< tree_data << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_termobs_test_data_fields(test_data,tree_data);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

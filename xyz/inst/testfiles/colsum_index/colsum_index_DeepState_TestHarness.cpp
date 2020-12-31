// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// colsum_index_DeepState_TestHarness_generation.cpp and colsum_index_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector colsum_index(NumericMatrix X, IntegerVector indexes);

TEST(xyz_deepstate_test,colsum_index_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix X  = RcppDeepState_NumericMatrix();
  qs::c_qsave(X,"/home/akhila/fuzzer_packages/fuzzedpackages/xyz/inst/testfiles/colsum_index/inputs/X.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  IntegerVector indexes  = RcppDeepState_IntegerVector();
  qs::c_qsave(indexes,"/home/akhila/fuzzer_packages/fuzzedpackages/xyz/inst/testfiles/colsum_index/inputs/indexes.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "indexes values: "<< indexes << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    colsum_index(X,indexes);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

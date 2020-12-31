// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// matrixRowInds_DeepState_TestHarness_generation.cpp and matrixRowInds_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector matrixRowInds(IntegerVector indices);

TEST(openxlsx_deepstate_test,matrixRowInds_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector indices  = RcppDeepState_IntegerVector();
  qs::c_qsave(indices,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/matrixRowInds/inputs/indices.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "indices values: "<< indices << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    matrixRowInds(indices);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

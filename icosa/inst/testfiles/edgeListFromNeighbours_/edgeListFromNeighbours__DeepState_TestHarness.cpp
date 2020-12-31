// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// edgeListFromNeighbours__DeepState_TestHarness_generation.cpp and edgeListFromNeighbours__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix edgeListFromNeighbours_(NumericMatrix outN);

TEST(icosa_deepstate_test,edgeListFromNeighbours__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix outN  = RcppDeepState_NumericMatrix();
  qs::c_qsave(outN,"/home/akhila/fuzzer_packages/fuzzedpackages/icosa/inst/testfiles/edgeListFromNeighbours_/inputs/outN.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "outN values: "<< outN << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    edgeListFromNeighbours_(outN);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

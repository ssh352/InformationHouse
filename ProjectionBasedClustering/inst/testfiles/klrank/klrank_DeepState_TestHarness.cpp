// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// klrank_DeepState_TestHarness_generation.cpp and klrank_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List klrank(NumericMatrix Data, NumericMatrix pData, int NeighborhoodSize);

TEST(ProjectionBasedClustering_deepstate_test,klrank_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix Data  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Data,"/home/akhila/fuzzer_packages/fuzzedpackages/ProjectionBasedClustering/inst/testfiles/klrank/inputs/Data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Data values: "<< Data << std::endl;
  NumericMatrix pData  = RcppDeepState_NumericMatrix();
  qs::c_qsave(pData,"/home/akhila/fuzzer_packages/fuzzedpackages/ProjectionBasedClustering/inst/testfiles/klrank/inputs/pData.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pData values: "<< pData << std::endl;
  IntegerVector NeighborhoodSize(1);
  NeighborhoodSize[0]  = RcppDeepState_int();
  qs::c_qsave(NeighborhoodSize,"/home/akhila/fuzzer_packages/fuzzedpackages/ProjectionBasedClustering/inst/testfiles/klrank/inputs/NeighborhoodSize.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NeighborhoodSize values: "<< NeighborhoodSize << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    klrank(Data,pData,NeighborhoodSize[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
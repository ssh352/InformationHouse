// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// dijkstra_inf_DeepState_TestHarness_generation.cpp and dijkstra_inf_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector dijkstra_inf(NumericMatrix dist, int src);

TEST(gretel_deepstate_test,dijkstra_inf_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix dist  = RcppDeepState_NumericMatrix();
  qs::c_qsave(dist,"/home/akhila/fuzzer_packages/fuzzedpackages/gretel/inst/testfiles/dijkstra_inf/inputs/dist.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dist values: "<< dist << std::endl;
  IntegerVector src(1);
  src[0]  = RcppDeepState_int();
  qs::c_qsave(src,"/home/akhila/fuzzer_packages/fuzzedpackages/gretel/inst/testfiles/dijkstra_inf/inputs/src.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "src values: "<< src << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    dijkstra_inf(dist,src[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// prims_DeepState_TestHarness_generation.cpp and prims_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix prims(const NumericVector x_dist, const int n);

TEST(dbscan_deepstate_test,prims_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x_dist  = RcppDeepState_NumericVector();
  qs::c_qsave(x_dist,"/home/akhila/fuzzer_packages/fuzzedpackages/dbscan/inst/testfiles/prims/inputs/x_dist.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_dist values: "<< x_dist << std::endl;
  IntegerVector n(1);
  n[0]  = RcppDeepState_int();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/dbscan/inst/testfiles/prims/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    prims(x_dist,n[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

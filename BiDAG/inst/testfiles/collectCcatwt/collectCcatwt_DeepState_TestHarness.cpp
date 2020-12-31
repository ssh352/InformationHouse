// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// collectCcatwt_DeepState_TestHarness_generation.cpp and collectCcatwt_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix collectCcatwt(IntegerVector xs, IntegerVector ys, NumericVector ws, int n, int m);

TEST(BiDAG_deepstate_test,collectCcatwt_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector xs  = RcppDeepState_IntegerVector();
  qs::c_qsave(xs,"/home/akhila/fuzzer_packages/fuzzedpackages/BiDAG/inst/testfiles/collectCcatwt/inputs/xs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xs values: "<< xs << std::endl;
  IntegerVector ys  = RcppDeepState_IntegerVector();
  qs::c_qsave(ys,"/home/akhila/fuzzer_packages/fuzzedpackages/BiDAG/inst/testfiles/collectCcatwt/inputs/ys.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ys values: "<< ys << std::endl;
  NumericVector ws  = RcppDeepState_NumericVector();
  qs::c_qsave(ws,"/home/akhila/fuzzer_packages/fuzzedpackages/BiDAG/inst/testfiles/collectCcatwt/inputs/ws.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ws values: "<< ws << std::endl;
  IntegerVector n(1);
  n[0]  = RcppDeepState_int();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/BiDAG/inst/testfiles/collectCcatwt/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  IntegerVector m(1);
  m[0]  = RcppDeepState_int();
  qs::c_qsave(m,"/home/akhila/fuzzer_packages/fuzzedpackages/BiDAG/inst/testfiles/collectCcatwt/inputs/m.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    collectCcatwt(xs,ys,ws,n[0],m[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
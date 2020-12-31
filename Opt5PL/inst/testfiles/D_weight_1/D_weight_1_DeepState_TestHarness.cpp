// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// D_weight_1_DeepState_TestHarness_generation.cpp and D_weight_1_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector D_weight_1(NumericVector q, NumericVector W, NumericVector T1, NumericVector T2, NumericVector T3, NumericVector X, NumericMatrix inv1, NumericMatrix inv2, NumericMatrix inv3);

TEST(Opt5PL_deepstate_test,D_weight_1_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector q  = RcppDeepState_NumericVector();
  qs::c_qsave(q,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/q.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "q values: "<< q << std::endl;
  NumericVector W  = RcppDeepState_NumericVector();
  qs::c_qsave(W,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/W.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "W values: "<< W << std::endl;
  NumericVector T1  = RcppDeepState_NumericVector();
  qs::c_qsave(T1,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/T1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T1 values: "<< T1 << std::endl;
  NumericVector T2  = RcppDeepState_NumericVector();
  qs::c_qsave(T2,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/T2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T2 values: "<< T2 << std::endl;
  NumericVector T3  = RcppDeepState_NumericVector();
  qs::c_qsave(T3,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/T3.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T3 values: "<< T3 << std::endl;
  NumericVector X  = RcppDeepState_NumericVector();
  qs::c_qsave(X,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/X.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  NumericMatrix inv1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(inv1,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/inv1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "inv1 values: "<< inv1 << std::endl;
  NumericMatrix inv2  = RcppDeepState_NumericMatrix();
  qs::c_qsave(inv2,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/inv2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "inv2 values: "<< inv2 << std::endl;
  NumericMatrix inv3  = RcppDeepState_NumericMatrix();
  qs::c_qsave(inv3,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/D_weight_1/inputs/inv3.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "inv3 values: "<< inv3 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    D_weight_1(q,W,T1,T2,T3,X,inv1,inv2,inv3);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
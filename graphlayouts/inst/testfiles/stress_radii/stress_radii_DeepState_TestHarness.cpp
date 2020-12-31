// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// stress_radii_DeepState_TestHarness_generation.cpp and stress_radii_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix stress_radii(NumericMatrix y, NumericMatrix W, NumericMatrix D, NumericVector r, NumericVector tseq);

TEST(graphlayouts_deepstate_test,stress_radii_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix y  = RcppDeepState_NumericMatrix();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_radii/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericMatrix W  = RcppDeepState_NumericMatrix();
  qs::c_qsave(W,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_radii/inputs/W.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "W values: "<< W << std::endl;
  NumericMatrix D  = RcppDeepState_NumericMatrix();
  qs::c_qsave(D,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_radii/inputs/D.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "D values: "<< D << std::endl;
  NumericVector r  = RcppDeepState_NumericVector();
  qs::c_qsave(r,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_radii/inputs/r.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "r values: "<< r << std::endl;
  NumericVector tseq  = RcppDeepState_NumericVector();
  qs::c_qsave(tseq,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_radii/inputs/tseq.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tseq values: "<< tseq << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    stress_radii(y,W,D,r,tseq);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
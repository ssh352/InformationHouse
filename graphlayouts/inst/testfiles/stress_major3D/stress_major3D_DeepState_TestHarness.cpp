// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// stress_major3D_DeepState_TestHarness_generation.cpp and stress_major3D_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix stress_major3D(NumericMatrix y, NumericMatrix W, NumericMatrix D, int iter, double tol);

TEST(graphlayouts_deepstate_test,stress_major3D_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix y  = RcppDeepState_NumericMatrix();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_major3D/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericMatrix W  = RcppDeepState_NumericMatrix();
  qs::c_qsave(W,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_major3D/inputs/W.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "W values: "<< W << std::endl;
  NumericMatrix D  = RcppDeepState_NumericMatrix();
  qs::c_qsave(D,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_major3D/inputs/D.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "D values: "<< D << std::endl;
  IntegerVector iter(1);
  iter[0]  = RcppDeepState_int();
  qs::c_qsave(iter,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_major3D/inputs/iter.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "iter values: "<< iter << std::endl;
  NumericVector tol(1);
  tol[0]  = RcppDeepState_double();
  qs::c_qsave(tol,"/home/akhila/fuzzer_packages/fuzzedpackages/graphlayouts/inst/testfiles/stress_major3D/inputs/tol.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tol values: "<< tol << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    stress_major3D(y,W,D,iter[0],tol[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

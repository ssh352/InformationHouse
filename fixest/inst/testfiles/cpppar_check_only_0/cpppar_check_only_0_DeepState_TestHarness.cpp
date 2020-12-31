// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpppar_check_only_0_DeepState_TestHarness_generation.cpp and cpppar_check_only_0_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector cpppar_check_only_0(NumericMatrix x_mat, int nthreads);

TEST(fixest_deepstate_test,cpppar_check_only_0_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix x_mat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(x_mat,"/home/akhila/fuzzer_packages/fuzzedpackages/fixest/inst/testfiles/cpppar_check_only_0/inputs/x_mat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_mat values: "<< x_mat << std::endl;
  IntegerVector nthreads(1);
  nthreads[0]  = RcppDeepState_int();
  qs::c_qsave(nthreads,"/home/akhila/fuzzer_packages/fuzzedpackages/fixest/inst/testfiles/cpppar_check_only_0/inputs/nthreads.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nthreads values: "<< nthreads << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpppar_check_only_0(x_mat,nthreads[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

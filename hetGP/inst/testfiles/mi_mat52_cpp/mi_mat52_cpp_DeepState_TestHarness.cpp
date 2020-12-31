// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mi_mat52_cpp_DeepState_TestHarness_generation.cpp and mi_mat52_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector mi_mat52_cpp(NumericMatrix Mu, NumericVector sigma);

TEST(hetGP_deepstate_test,mi_mat52_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix Mu  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Mu,"/home/akhila/fuzzer_packages/fuzzedpackages/hetGP/inst/testfiles/mi_mat52_cpp/inputs/Mu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Mu values: "<< Mu << std::endl;
  NumericVector sigma  = RcppDeepState_NumericVector();
  qs::c_qsave(sigma,"/home/akhila/fuzzer_packages/fuzzedpackages/hetGP/inst/testfiles/mi_mat52_cpp/inputs/sigma.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sigma values: "<< sigma << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mi_mat52_cpp(Mu,sigma);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

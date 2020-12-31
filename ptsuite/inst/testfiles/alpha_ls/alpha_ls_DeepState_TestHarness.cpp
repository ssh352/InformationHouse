// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// alpha_ls_DeepState_TestHarness_generation.cpp and alpha_ls_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List alpha_ls(NumericVector dat);

TEST(ptsuite_deepstate_test,alpha_ls_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector dat  = RcppDeepState_NumericVector();
  qs::c_qsave(dat,"/home/akhila/fuzzer_packages/fuzzedpackages/ptsuite/inst/testfiles/alpha_ls/inputs/dat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dat values: "<< dat << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    alpha_ls(dat);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

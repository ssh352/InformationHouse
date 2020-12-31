// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// shiftedlegendre_DeepState_TestHarness_generation.cpp and shiftedlegendre_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat shiftedlegendre(int rmax);

TEST(Lmoments_deepstate_test,shiftedlegendre_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector rmax(1);
  rmax[0]  = RcppDeepState_int();
  qs::c_qsave(rmax,"/home/akhila/fuzzer_packages/fuzzedpackages/Lmoments/inst/testfiles/shiftedlegendre/inputs/rmax.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rmax values: "<< rmax << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    shiftedlegendre(rmax[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
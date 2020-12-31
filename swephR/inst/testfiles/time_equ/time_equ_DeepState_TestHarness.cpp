// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// time_equ_DeepState_TestHarness_generation.cpp and time_equ_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List time_equ(double jd_ut);

TEST(swephR_deepstate_test,time_equ_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector jd_ut(1);
  jd_ut[0]  = RcppDeepState_double();
  qs::c_qsave(jd_ut,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/time_equ/inputs/jd_ut.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "jd_ut values: "<< jd_ut << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    time_equ(jd_ut[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
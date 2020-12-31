// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mat_comp_surv_cpp_DeepState_TestHarness_generation.cpp and mat_comp_surv_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix mat_comp_surv_cpp(NumericVector time1, NumericVector event1, NumericVector time0, NumericVector event0);

TEST(WinRatio_deepstate_test,mat_comp_surv_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector time1  = RcppDeepState_NumericVector();
  qs::c_qsave(time1,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_surv_cpp/inputs/time1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time1 values: "<< time1 << std::endl;
  NumericVector event1  = RcppDeepState_NumericVector();
  qs::c_qsave(event1,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_surv_cpp/inputs/event1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "event1 values: "<< event1 << std::endl;
  NumericVector time0  = RcppDeepState_NumericVector();
  qs::c_qsave(time0,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_surv_cpp/inputs/time0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time0 values: "<< time0 << std::endl;
  NumericVector event0  = RcppDeepState_NumericVector();
  qs::c_qsave(event0,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_surv_cpp/inputs/event0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "event0 values: "<< event0 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mat_comp_surv_cpp(time1,event1,time0,event0);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
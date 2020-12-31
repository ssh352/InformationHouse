// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mat_comp_repeated_cpp_DeepState_TestHarness_generation.cpp and mat_comp_repeated_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix mat_comp_repeated_cpp(NumericMatrix time1, NumericMatrix event1, NumericVector fu1, NumericMatrix time0, NumericMatrix event0, NumericVector fu0);

TEST(WinRatio_deepstate_test,mat_comp_repeated_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix time1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(time1,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_repeated_cpp/inputs/time1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time1 values: "<< time1 << std::endl;
  NumericMatrix event1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(event1,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_repeated_cpp/inputs/event1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "event1 values: "<< event1 << std::endl;
  NumericVector fu1  = RcppDeepState_NumericVector();
  qs::c_qsave(fu1,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_repeated_cpp/inputs/fu1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fu1 values: "<< fu1 << std::endl;
  NumericMatrix time0  = RcppDeepState_NumericMatrix();
  qs::c_qsave(time0,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_repeated_cpp/inputs/time0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time0 values: "<< time0 << std::endl;
  NumericMatrix event0  = RcppDeepState_NumericMatrix();
  qs::c_qsave(event0,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_repeated_cpp/inputs/event0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "event0 values: "<< event0 << std::endl;
  NumericVector fu0  = RcppDeepState_NumericVector();
  qs::c_qsave(fu0,"/home/akhila/fuzzer_packages/fuzzedpackages/WinRatio/inst/testfiles/mat_comp_repeated_cpp/inputs/fu0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fu0 values: "<< fu0 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mat_comp_repeated_cpp(time1,event1,fu1,time0,event0,fu0);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_inv_smoothLinLog_DeepState_TestHarness_generation.cpp and cpp_inv_smoothLinLog_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector cpp_inv_smoothLinLog(const Rcpp::NumericVector x, const double hyper, const double base, const double lin_comp);

TEST(IFC_deepstate_test,cpp_inv_smoothLinLog_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/IFC/inst/testfiles/cpp_inv_smoothLinLog/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector hyper(1);
  hyper[0]  = RcppDeepState_double();
  qs::c_qsave(hyper,"/home/akhila/fuzzer_packages/fuzzedpackages/IFC/inst/testfiles/cpp_inv_smoothLinLog/inputs/hyper.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "hyper values: "<< hyper << std::endl;
  NumericVector base(1);
  base[0]  = RcppDeepState_double();
  qs::c_qsave(base,"/home/akhila/fuzzer_packages/fuzzedpackages/IFC/inst/testfiles/cpp_inv_smoothLinLog/inputs/base.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "base values: "<< base << std::endl;
  NumericVector lin_comp(1);
  lin_comp[0]  = RcppDeepState_double();
  qs::c_qsave(lin_comp,"/home/akhila/fuzzer_packages/fuzzedpackages/IFC/inst/testfiles/cpp_inv_smoothLinLog/inputs/lin_comp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lin_comp values: "<< lin_comp << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_inv_smoothLinLog(x,hyper[0],base[0],lin_comp[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

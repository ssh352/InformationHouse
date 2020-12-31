// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_detectEWMAMeanMultiple_DeepState_TestHarness_generation.cpp and cpp_detectEWMAMeanMultiple_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List cpp_detectEWMAMeanMultiple(Rcpp::NumericVector x, double r, double L, int BL);

TEST(ffstream_deepstate_test,cpp_detectEWMAMeanMultiple_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectEWMAMeanMultiple/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector r(1);
  r[0]  = RcppDeepState_double();
  qs::c_qsave(r,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectEWMAMeanMultiple/inputs/r.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "r values: "<< r << std::endl;
  NumericVector L(1);
  L[0]  = RcppDeepState_double();
  qs::c_qsave(L,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectEWMAMeanMultiple/inputs/L.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "L values: "<< L << std::endl;
  IntegerVector BL(1);
  BL[0]  = RcppDeepState_int();
  qs::c_qsave(BL,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectEWMAMeanMultiple/inputs/BL.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "BL values: "<< BL << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_detectEWMAMeanMultiple(x,r[0],L[0],BL[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

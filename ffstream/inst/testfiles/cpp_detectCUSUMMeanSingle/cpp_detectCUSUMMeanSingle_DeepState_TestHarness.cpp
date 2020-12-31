// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_detectCUSUMMeanSingle_DeepState_TestHarness_generation.cpp and cpp_detectCUSUMMeanSingle_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List cpp_detectCUSUMMeanSingle(Rcpp::NumericVector x, double k, double h, int BL);

TEST(ffstream_deepstate_test,cpp_detectCUSUMMeanSingle_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectCUSUMMeanSingle/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector k(1);
  k[0]  = RcppDeepState_double();
  qs::c_qsave(k,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectCUSUMMeanSingle/inputs/k.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "k values: "<< k << std::endl;
  NumericVector h(1);
  h[0]  = RcppDeepState_double();
  qs::c_qsave(h,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectCUSUMMeanSingle/inputs/h.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h values: "<< h << std::endl;
  IntegerVector BL(1);
  BL[0]  = RcppDeepState_int();
  qs::c_qsave(BL,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectCUSUMMeanSingle/inputs/BL.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "BL values: "<< BL << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_detectCUSUMMeanSingle(x,k[0],h[0],BL[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

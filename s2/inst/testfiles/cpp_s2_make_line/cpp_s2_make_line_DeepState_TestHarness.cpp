// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_s2_make_line_DeepState_TestHarness_generation.cpp and cpp_s2_make_line_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List cpp_s2_make_line(NumericVector x, NumericVector y, IntegerVector featureId);

TEST(s2_deepstate_test,cpp_s2_make_line_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/s2/inst/testfiles/cpp_s2_make_line/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/s2/inst/testfiles/cpp_s2_make_line/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  IntegerVector featureId  = RcppDeepState_IntegerVector();
  qs::c_qsave(featureId,"/home/akhila/fuzzer_packages/fuzzedpackages/s2/inst/testfiles/cpp_s2_make_line/inputs/featureId.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "featureId values: "<< featureId << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_s2_make_line(x,y,featureId);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
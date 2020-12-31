// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_detectFFFMeanMultiple_DeepState_TestHarness_generation.cpp and cpp_detectFFFMeanMultiple_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List cpp_detectFFFMeanMultiple(Rcpp::NumericVector x, double lambda, double alpha, int BL);

TEST(ffstream_deepstate_test,cpp_detectFFFMeanMultiple_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectFFFMeanMultiple/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector lambda(1);
  lambda[0]  = RcppDeepState_double();
  qs::c_qsave(lambda,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectFFFMeanMultiple/inputs/lambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda values: "<< lambda << std::endl;
  NumericVector alpha(1);
  alpha[0]  = RcppDeepState_double();
  qs::c_qsave(alpha,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectFFFMeanMultiple/inputs/alpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  IntegerVector BL(1);
  BL[0]  = RcppDeepState_int();
  qs::c_qsave(BL,"/home/akhila/fuzzer_packages/fuzzedpackages/ffstream/inst/testfiles/cpp_detectFFFMeanMultiple/inputs/BL.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "BL values: "<< BL << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_detectFFFMeanMultiple(x,lambda[0],alpha[0],BL[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
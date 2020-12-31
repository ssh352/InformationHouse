// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// transformation_DeepState_TestHarness_generation.cpp and transformation_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector transformation(NumericVector x, NumericVector lb, NumericVector ub);

TEST(RMPSH_deepstate_test,transformation_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/RMPSH/inst/testfiles/transformation/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector lb  = RcppDeepState_NumericVector();
  qs::c_qsave(lb,"/home/akhila/fuzzer_packages/fuzzedpackages/RMPSH/inst/testfiles/transformation/inputs/lb.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lb values: "<< lb << std::endl;
  NumericVector ub  = RcppDeepState_NumericVector();
  qs::c_qsave(ub,"/home/akhila/fuzzer_packages/fuzzedpackages/RMPSH/inst/testfiles/transformation/inputs/ub.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ub values: "<< ub << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    transformation(x,lb,ub);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

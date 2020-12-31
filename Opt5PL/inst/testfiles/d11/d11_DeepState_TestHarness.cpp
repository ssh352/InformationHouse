// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// d11_DeepState_TestHarness_generation.cpp and d11_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double d11(NumericVector T, double x, double xl, NumericMatrix inv, NumericMatrix inv1, int order);

TEST(Opt5PL_deepstate_test,d11_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector T  = RcppDeepState_NumericVector();
  qs::c_qsave(T,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/d11/inputs/T.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T values: "<< T << std::endl;
  NumericVector x(1);
  x[0]  = RcppDeepState_double();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/d11/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector xl(1);
  xl[0]  = RcppDeepState_double();
  qs::c_qsave(xl,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/d11/inputs/xl.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xl values: "<< xl << std::endl;
  NumericMatrix inv  = RcppDeepState_NumericMatrix();
  qs::c_qsave(inv,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/d11/inputs/inv.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "inv values: "<< inv << std::endl;
  NumericMatrix inv1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(inv1,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/d11/inputs/inv1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "inv1 values: "<< inv1 << std::endl;
  IntegerVector order(1);
  order[0]  = RcppDeepState_int();
  qs::c_qsave(order,"/home/akhila/fuzzer_packages/fuzzedpackages/Opt5PL/inst/testfiles/d11/inputs/order.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "order values: "<< order << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    d11(T,x[0],xl[0],inv,inv1,order[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Ikk_cpp_DeepState_TestHarness_generation.cpp and Ikk_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double Ikk_cpp(double a, double b, double t, int ct);

TEST(activegp_deepstate_test,Ikk_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector a(1);
  a[0]  = RcppDeepState_double();
  qs::c_qsave(a,"/home/akhila/fuzzer_packages/fuzzedpackages/activegp/inst/testfiles/Ikk_cpp/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  NumericVector b(1);
  b[0]  = RcppDeepState_double();
  qs::c_qsave(b,"/home/akhila/fuzzer_packages/fuzzedpackages/activegp/inst/testfiles/Ikk_cpp/inputs/b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  NumericVector t(1);
  t[0]  = RcppDeepState_double();
  qs::c_qsave(t,"/home/akhila/fuzzer_packages/fuzzedpackages/activegp/inst/testfiles/Ikk_cpp/inputs/t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t values: "<< t << std::endl;
  IntegerVector ct(1);
  ct[0]  = RcppDeepState_int();
  qs::c_qsave(ct,"/home/akhila/fuzzer_packages/fuzzedpackages/activegp/inst/testfiles/Ikk_cpp/inputs/ct.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ct values: "<< ct << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    Ikk_cpp(a[0],b[0],t[0],ct[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

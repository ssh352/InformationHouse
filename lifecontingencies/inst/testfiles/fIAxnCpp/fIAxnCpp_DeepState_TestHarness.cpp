// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fIAxnCpp_DeepState_TestHarness_generation.cpp and fIAxnCpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double fIAxnCpp(double T, double y, double n, double i, double m, double k);

TEST(lifecontingencies_deepstate_test,fIAxnCpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector T(1);
  T[0]  = RcppDeepState_double();
  qs::c_qsave(T,"/home/akhila/fuzzer_packages/fuzzedpackages/lifecontingencies/inst/testfiles/fIAxnCpp/inputs/T.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T values: "<< T << std::endl;
  NumericVector y(1);
  y[0]  = RcppDeepState_double();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/lifecontingencies/inst/testfiles/fIAxnCpp/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector n(1);
  n[0]  = RcppDeepState_double();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/lifecontingencies/inst/testfiles/fIAxnCpp/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  NumericVector i(1);
  i[0]  = RcppDeepState_double();
  qs::c_qsave(i,"/home/akhila/fuzzer_packages/fuzzedpackages/lifecontingencies/inst/testfiles/fIAxnCpp/inputs/i.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "i values: "<< i << std::endl;
  NumericVector m(1);
  m[0]  = RcppDeepState_double();
  qs::c_qsave(m,"/home/akhila/fuzzer_packages/fuzzedpackages/lifecontingencies/inst/testfiles/fIAxnCpp/inputs/m.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  NumericVector k(1);
  k[0]  = RcppDeepState_double();
  qs::c_qsave(k,"/home/akhila/fuzzer_packages/fuzzedpackages/lifecontingencies/inst/testfiles/fIAxnCpp/inputs/k.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "k values: "<< k << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fIAxnCpp(T[0],y[0],n[0],i[0],m[0],k[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
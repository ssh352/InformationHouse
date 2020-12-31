// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// stable_cdf_DeepState_TestHarness_generation.cpp and stable_cdf_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector stable_cdf(NumericVector x, NumericVector pars, int parametrization, double tol);

TEST(libstableR_deepstate_test,stable_cdf_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/libstableR/inst/testfiles/stable_cdf/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector pars  = RcppDeepState_NumericVector();
  qs::c_qsave(pars,"/home/akhila/fuzzer_packages/fuzzedpackages/libstableR/inst/testfiles/stable_cdf/inputs/pars.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pars values: "<< pars << std::endl;
  IntegerVector parametrization(1);
  parametrization[0]  = RcppDeepState_int();
  qs::c_qsave(parametrization,"/home/akhila/fuzzer_packages/fuzzedpackages/libstableR/inst/testfiles/stable_cdf/inputs/parametrization.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parametrization values: "<< parametrization << std::endl;
  NumericVector tol(1);
  tol[0]  = RcppDeepState_double();
  qs::c_qsave(tol,"/home/akhila/fuzzer_packages/fuzzedpackages/libstableR/inst/testfiles/stable_cdf/inputs/tol.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tol values: "<< tol << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    stable_cdf(x,pars,parametrization[0],tol[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

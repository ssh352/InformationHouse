// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// do_range_dbl_DeepState_TestHarness_generation.cpp and do_range_dbl_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

DoubleVector do_range_dbl(NumericVector x, double halt_if_min, double halt_if_max);

TEST(hutilscpp_deepstate_test,do_range_dbl_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/hutilscpp/inst/testfiles/do_range_dbl/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector halt_if_min(1);
  halt_if_min[0]  = RcppDeepState_double();
  qs::c_qsave(halt_if_min,"/home/akhila/fuzzer_packages/fuzzedpackages/hutilscpp/inst/testfiles/do_range_dbl/inputs/halt_if_min.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "halt_if_min values: "<< halt_if_min << std::endl;
  NumericVector halt_if_max(1);
  halt_if_max[0]  = RcppDeepState_double();
  qs::c_qsave(halt_if_max,"/home/akhila/fuzzer_packages/fuzzedpackages/hutilscpp/inst/testfiles/do_range_dbl/inputs/halt_if_max.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "halt_if_max values: "<< halt_if_max << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    do_range_dbl(x,halt_if_min[0],halt_if_max[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

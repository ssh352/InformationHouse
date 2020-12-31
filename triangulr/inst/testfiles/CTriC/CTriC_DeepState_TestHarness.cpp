// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// CTriC_DeepState_TestHarness_generation.cpp and CTriC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

ComplexVector CTriC(NumericVector t, double min, double max, double mode);

TEST(triangulr_deepstate_test,CTriC_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector t  = RcppDeepState_NumericVector();
  qs::c_qsave(t,"/home/akhila/fuzzer_packages/fuzzedpackages/triangulr/inst/testfiles/CTriC/inputs/t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t values: "<< t << std::endl;
  NumericVector min(1);
  min[0]  = RcppDeepState_double();
  qs::c_qsave(min,"/home/akhila/fuzzer_packages/fuzzedpackages/triangulr/inst/testfiles/CTriC/inputs/min.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "min values: "<< min << std::endl;
  NumericVector max(1);
  max[0]  = RcppDeepState_double();
  qs::c_qsave(max,"/home/akhila/fuzzer_packages/fuzzedpackages/triangulr/inst/testfiles/CTriC/inputs/max.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "max values: "<< max << std::endl;
  NumericVector mode(1);
  mode[0]  = RcppDeepState_double();
  qs::c_qsave(mode,"/home/akhila/fuzzer_packages/fuzzedpackages/triangulr/inst/testfiles/CTriC/inputs/mode.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mode values: "<< mode << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    CTriC(t,min[0],max[0],mode[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

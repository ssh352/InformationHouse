// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// IBS_Caller_DeepState_TestHarness_generation.cpp and IBS_Caller_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int IBS_Caller(IntegerVector Prof1, IntegerVector Prof2, int nLoci);

TEST(relSim_deepstate_test,IBS_Caller_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector Prof1  = RcppDeepState_IntegerVector();
  qs::c_qsave(Prof1,"/home/akhila/fuzzer_packages/fuzzedpackages/relSim/inst/testfiles/IBS_Caller/inputs/Prof1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Prof1 values: "<< Prof1 << std::endl;
  IntegerVector Prof2  = RcppDeepState_IntegerVector();
  qs::c_qsave(Prof2,"/home/akhila/fuzzer_packages/fuzzedpackages/relSim/inst/testfiles/IBS_Caller/inputs/Prof2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Prof2 values: "<< Prof2 << std::endl;
  IntegerVector nLoci(1);
  nLoci[0]  = RcppDeepState_int();
  qs::c_qsave(nLoci,"/home/akhila/fuzzer_packages/fuzzedpackages/relSim/inst/testfiles/IBS_Caller/inputs/nLoci.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nLoci values: "<< nLoci << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    IBS_Caller(Prof1,Prof2,nLoci[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
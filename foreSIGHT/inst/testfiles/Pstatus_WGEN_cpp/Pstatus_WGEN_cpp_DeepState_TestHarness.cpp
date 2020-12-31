// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Pstatus_WGEN_cpp_DeepState_TestHarness_generation.cpp and Pstatus_WGEN_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector Pstatus_WGEN_cpp(NumericVector parPwd, NumericVector parPdd, NumericVector RN, int ndays);

TEST(foreSIGHT_deepstate_test,Pstatus_WGEN_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector parPwd  = RcppDeepState_NumericVector();
  qs::c_qsave(parPwd,"/home/akhila/fuzzer_packages/fuzzedpackages/foreSIGHT/inst/testfiles/Pstatus_WGEN_cpp/inputs/parPwd.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parPwd values: "<< parPwd << std::endl;
  NumericVector parPdd  = RcppDeepState_NumericVector();
  qs::c_qsave(parPdd,"/home/akhila/fuzzer_packages/fuzzedpackages/foreSIGHT/inst/testfiles/Pstatus_WGEN_cpp/inputs/parPdd.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parPdd values: "<< parPdd << std::endl;
  NumericVector RN  = RcppDeepState_NumericVector();
  qs::c_qsave(RN,"/home/akhila/fuzzer_packages/fuzzedpackages/foreSIGHT/inst/testfiles/Pstatus_WGEN_cpp/inputs/RN.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "RN values: "<< RN << std::endl;
  IntegerVector ndays(1);
  ndays[0]  = RcppDeepState_int();
  qs::c_qsave(ndays,"/home/akhila/fuzzer_packages/fuzzedpackages/foreSIGHT/inst/testfiles/Pstatus_WGEN_cpp/inputs/ndays.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ndays values: "<< ndays << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    Pstatus_WGEN_cpp(parPwd,parPdd,RN,ndays[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// VTStarWeihsEtAlRCPP_DeepState_TestHarness_generation.cpp and VTStarWeihsEtAlRCPP_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector VTStarWeihsEtAlRCPP(NumericVector xNumeric, NumericVector yNumeric);

TEST(TauStar_deepstate_test,VTStarWeihsEtAlRCPP_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector xNumeric  = RcppDeepState_NumericVector();
  qs::c_qsave(xNumeric,"/home/akhila/fuzzer_packages/fuzzedpackages/TauStar/inst/testfiles/VTStarWeihsEtAlRCPP/inputs/xNumeric.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xNumeric values: "<< xNumeric << std::endl;
  NumericVector yNumeric  = RcppDeepState_NumericVector();
  qs::c_qsave(yNumeric,"/home/akhila/fuzzer_packages/fuzzedpackages/TauStar/inst/testfiles/VTStarWeihsEtAlRCPP/inputs/yNumeric.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yNumeric values: "<< yNumeric << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    VTStarWeihsEtAlRCPP(xNumeric,yNumeric);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

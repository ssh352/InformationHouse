// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// tqdist_AllPairsQuartetAgreementChar_DeepState_TestHarness_generation.cpp and tqdist_AllPairsQuartetAgreementChar_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerMatrix tqdist_AllPairsQuartetAgreementChar(CharacterVector string);

TEST(Quartet_deepstate_test,tqdist_AllPairsQuartetAgreementChar_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector string  = RcppDeepState_CharacterVector();
  qs::c_qsave(string,"/home/akhila/fuzzer_packages/fuzzedpackages/Quartet/inst/testfiles/tqdist_AllPairsQuartetAgreementChar/inputs/string.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "string values: "<< string << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    tqdist_AllPairsQuartetAgreementChar(string);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
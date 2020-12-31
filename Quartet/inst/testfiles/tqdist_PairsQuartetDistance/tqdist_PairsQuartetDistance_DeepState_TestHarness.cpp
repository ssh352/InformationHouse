// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// tqdist_PairsQuartetDistance_DeepState_TestHarness_generation.cpp and tqdist_PairsQuartetDistance_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector tqdist_PairsQuartetDistance(CharacterVector file1, CharacterVector file2);

TEST(Quartet_deepstate_test,tqdist_PairsQuartetDistance_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector file1  = RcppDeepState_CharacterVector();
  qs::c_qsave(file1,"/home/akhila/fuzzer_packages/fuzzedpackages/Quartet/inst/testfiles/tqdist_PairsQuartetDistance/inputs/file1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "file1 values: "<< file1 << std::endl;
  CharacterVector file2  = RcppDeepState_CharacterVector();
  qs::c_qsave(file2,"/home/akhila/fuzzer_packages/fuzzedpackages/Quartet/inst/testfiles/tqdist_PairsQuartetDistance/inputs/file2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "file2 values: "<< file2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    tqdist_PairsQuartetDistance(file1,file2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

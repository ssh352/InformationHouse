// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_debug_wkt_streamer_DeepState_TestHarness_generation.cpp and cpp_debug_wkt_streamer_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void cpp_debug_wkt_streamer(CharacterVector input);

TEST(wkutils_deepstate_test,cpp_debug_wkt_streamer_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector input  = RcppDeepState_CharacterVector();
  qs::c_qsave(input,"/home/akhila/fuzzer_packages/fuzzedpackages/wkutils/inst/testfiles/cpp_debug_wkt_streamer/inputs/input.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "input values: "<< input << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_debug_wkt_streamer(input);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
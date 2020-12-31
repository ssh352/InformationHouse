// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// proj_to_wkt_cpp_DeepState_TestHarness_generation.cpp and proj_to_wkt_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

CharacterVector proj_to_wkt_cpp(CharacterVector proj_str);

TEST(vapour_deepstate_test,proj_to_wkt_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector proj_str  = RcppDeepState_CharacterVector();
  qs::c_qsave(proj_str,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/proj_to_wkt_cpp/inputs/proj_str.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "proj_str values: "<< proj_str << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    proj_to_wkt_cpp(proj_str);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

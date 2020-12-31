// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// map_cell_types_to_integer_DeepState_TestHarness_generation.cpp and map_cell_types_to_integer_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector map_cell_types_to_integer(CharacterVector t);

TEST(openxlsx_deepstate_test,map_cell_types_to_integer_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector t  = RcppDeepState_CharacterVector();
  qs::c_qsave(t,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/map_cell_types_to_integer/inputs/t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t values: "<< t << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    map_cell_types_to_integer(t);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
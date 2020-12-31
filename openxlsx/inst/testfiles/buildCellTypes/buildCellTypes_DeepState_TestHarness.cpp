// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// buildCellTypes_DeepState_TestHarness_generation.cpp and buildCellTypes_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

CharacterVector buildCellTypes(CharacterVector classes, int nRows);

TEST(openxlsx_deepstate_test,buildCellTypes_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector classes  = RcppDeepState_CharacterVector();
  qs::c_qsave(classes,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildCellTypes/inputs/classes.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "classes values: "<< classes << std::endl;
  IntegerVector nRows(1);
  nRows[0]  = RcppDeepState_int();
  qs::c_qsave(nRows,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildCellTypes/inputs/nRows.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nRows values: "<< nRows << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    buildCellTypes(classes,nRows[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
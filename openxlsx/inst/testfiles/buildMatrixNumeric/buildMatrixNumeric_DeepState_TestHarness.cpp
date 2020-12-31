// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// buildMatrixNumeric_DeepState_TestHarness_generation.cpp and buildMatrixNumeric_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

SEXP buildMatrixNumeric(CharacterVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols);

TEST(openxlsx_deepstate_test,buildMatrixNumeric_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector v  = RcppDeepState_CharacterVector();
  qs::c_qsave(v,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildMatrixNumeric/inputs/v.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v values: "<< v << std::endl;
  IntegerVector rowInd  = RcppDeepState_IntegerVector();
  qs::c_qsave(rowInd,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildMatrixNumeric/inputs/rowInd.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rowInd values: "<< rowInd << std::endl;
  IntegerVector colInd  = RcppDeepState_IntegerVector();
  qs::c_qsave(colInd,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildMatrixNumeric/inputs/colInd.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "colInd values: "<< colInd << std::endl;
  CharacterVector colNames  = RcppDeepState_CharacterVector();
  qs::c_qsave(colNames,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildMatrixNumeric/inputs/colNames.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "colNames values: "<< colNames << std::endl;
  IntegerVector nRows(1);
  nRows[0]  = RcppDeepState_int();
  qs::c_qsave(nRows,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildMatrixNumeric/inputs/nRows.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nRows values: "<< nRows << std::endl;
  IntegerVector nCols(1);
  nCols[0]  = RcppDeepState_int();
  qs::c_qsave(nCols,"/home/akhila/fuzzer_packages/fuzzedpackages/openxlsx/inst/testfiles/buildMatrixNumeric/inputs/nCols.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nCols values: "<< nCols << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    buildMatrixNumeric(v,rowInd,colInd,colNames,nRows[0],nCols[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

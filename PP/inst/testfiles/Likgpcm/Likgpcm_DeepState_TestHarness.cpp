// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Likgpcm_DeepState_TestHarness_generation.cpp and Likgpcm_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector Likgpcm(IntegerVector awv, NumericMatrix DELTA, NumericVector ALPHA, NumericVector nodes);

TEST(PP_deepstate_test,Likgpcm_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector awv  = RcppDeepState_IntegerVector();
  qs::c_qsave(awv,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/Likgpcm/inputs/awv.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "awv values: "<< awv << std::endl;
  NumericMatrix DELTA  = RcppDeepState_NumericMatrix();
  qs::c_qsave(DELTA,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/Likgpcm/inputs/DELTA.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "DELTA values: "<< DELTA << std::endl;
  NumericVector ALPHA  = RcppDeepState_NumericVector();
  qs::c_qsave(ALPHA,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/Likgpcm/inputs/ALPHA.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ALPHA values: "<< ALPHA << std::endl;
  NumericVector nodes  = RcppDeepState_NumericVector();
  qs::c_qsave(nodes,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/Likgpcm/inputs/nodes.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nodes values: "<< nodes << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    Likgpcm(awv,DELTA,ALPHA,nodes);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
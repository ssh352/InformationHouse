// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// FmeasureC_no0_DeepState_TestHarness_generation.cpp and FmeasureC_no0_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double FmeasureC_no0(NumericVector pred, NumericVector ref);

TEST(cytometree_deepstate_test,FmeasureC_no0_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector pred  = RcppDeepState_NumericVector();
  qs::c_qsave(pred,"/home/akhila/fuzzer_packages/fuzzedpackages/cytometree/inst/testfiles/FmeasureC_no0/inputs/pred.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pred values: "<< pred << std::endl;
  NumericVector ref  = RcppDeepState_NumericVector();
  qs::c_qsave(ref,"/home/akhila/fuzzer_packages/fuzzedpackages/cytometree/inst/testfiles/FmeasureC_no0/inputs/ref.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ref values: "<< ref << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    FmeasureC_no0(pred,ref);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

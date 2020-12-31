// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// vusC_full_core_DeepState_TestHarness_generation.cpp and vusC_full_core_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List vusC_full_core(NumericVector tt1, NumericVector tt2, NumericVector tt3);

TEST(bcROCsurface_deepstate_test,vusC_full_core_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector tt1  = RcppDeepState_NumericVector();
  qs::c_qsave(tt1,"/home/akhila/fuzzer_packages/fuzzedpackages/bcROCsurface/inst/testfiles/vusC_full_core/inputs/tt1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tt1 values: "<< tt1 << std::endl;
  NumericVector tt2  = RcppDeepState_NumericVector();
  qs::c_qsave(tt2,"/home/akhila/fuzzer_packages/fuzzedpackages/bcROCsurface/inst/testfiles/vusC_full_core/inputs/tt2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tt2 values: "<< tt2 << std::endl;
  NumericVector tt3  = RcppDeepState_NumericVector();
  qs::c_qsave(tt3,"/home/akhila/fuzzer_packages/fuzzedpackages/bcROCsurface/inst/testfiles/vusC_full_core/inputs/tt3.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tt3 values: "<< tt3 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    vusC_full_core(tt1,tt2,tt3);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

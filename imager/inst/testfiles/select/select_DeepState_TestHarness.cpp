// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// select_DeepState_TestHarness_generation.cpp and select_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector select(NumericVector im, int type);

TEST(imager_deepstate_test,select_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector im  = RcppDeepState_NumericVector();
  qs::c_qsave(im,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/select/inputs/im.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "im values: "<< im << std::endl;
  IntegerVector type(1);
  type[0]  = RcppDeepState_int();
  qs::c_qsave(type,"/home/akhila/fuzzer_packages/fuzzedpackages/imager/inst/testfiles/select/inputs/type.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "type values: "<< type << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    select(im,type[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
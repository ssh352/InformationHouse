// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// RE_DeepState_TestHarness_generation.cpp and RE_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double RE(NumericVector yhat, NumericVector y, double yc_bar);

TEST(ldsr_deepstate_test,RE_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector yhat  = RcppDeepState_NumericVector();
  qs::c_qsave(yhat,"/home/akhila/fuzzer_packages/fuzzedpackages/ldsr/inst/testfiles/RE/inputs/yhat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yhat values: "<< yhat << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/ldsr/inst/testfiles/RE/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector yc_bar(1);
  yc_bar[0]  = RcppDeepState_double();
  qs::c_qsave(yc_bar,"/home/akhila/fuzzer_packages/fuzzedpackages/ldsr/inst/testfiles/RE/inputs/yc_bar.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yc_bar values: "<< yc_bar << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    RE(yhat,y,yc_bar[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
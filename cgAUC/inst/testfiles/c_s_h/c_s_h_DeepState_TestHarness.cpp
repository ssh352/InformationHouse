// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// c_s_h_DeepState_TestHarness_generation.cpp and c_s_h_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double c_s_h(double t, double h);

TEST(cgAUC_deepstate_test,c_s_h_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector t(1);
  t[0]  = RcppDeepState_double();
  qs::c_qsave(t,"/home/akhila/fuzzer_packages/fuzzedpackages/cgAUC/inst/testfiles/c_s_h/inputs/t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t values: "<< t << std::endl;
  NumericVector h(1);
  h[0]  = RcppDeepState_double();
  qs::c_qsave(h,"/home/akhila/fuzzer_packages/fuzzedpackages/cgAUC/inst/testfiles/c_s_h/inputs/h.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h values: "<< h << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    c_s_h(t[0],h[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

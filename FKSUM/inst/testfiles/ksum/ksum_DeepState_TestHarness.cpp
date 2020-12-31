// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ksum_DeepState_TestHarness_generation.cpp and ksum_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector ksum(NumericVector x, NumericVector y, NumericVector x_eval, double h, NumericVector betas, NumericVector Counts);

TEST(FKSUM_deepstate_test,ksum_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/FKSUM/inst/testfiles/ksum/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/FKSUM/inst/testfiles/ksum/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector x_eval  = RcppDeepState_NumericVector();
  qs::c_qsave(x_eval,"/home/akhila/fuzzer_packages/fuzzedpackages/FKSUM/inst/testfiles/ksum/inputs/x_eval.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_eval values: "<< x_eval << std::endl;
  NumericVector h(1);
  h[0]  = RcppDeepState_double();
  qs::c_qsave(h,"/home/akhila/fuzzer_packages/fuzzedpackages/FKSUM/inst/testfiles/ksum/inputs/h.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h values: "<< h << std::endl;
  NumericVector betas  = RcppDeepState_NumericVector();
  qs::c_qsave(betas,"/home/akhila/fuzzer_packages/fuzzedpackages/FKSUM/inst/testfiles/ksum/inputs/betas.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "betas values: "<< betas << std::endl;
  NumericVector Counts  = RcppDeepState_NumericVector();
  qs::c_qsave(Counts,"/home/akhila/fuzzer_packages/fuzzedpackages/FKSUM/inst/testfiles/ksum/inputs/Counts.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Counts values: "<< Counts << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ksum(x,y,x_eval,h[0],betas,Counts);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

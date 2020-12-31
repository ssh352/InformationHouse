// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// SimYpsilon_DeepState_TestHarness_generation.cpp and SimYpsilon_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix SimYpsilon(NumericMatrix rate, NumericVector n_rank);

TEST(PLMIX_deepstate_test,SimYpsilon_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix rate  = RcppDeepState_NumericMatrix();
  qs::c_qsave(rate,"/home/akhila/fuzzer_packages/fuzzedpackages/PLMIX/inst/testfiles/SimYpsilon/inputs/rate.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rate values: "<< rate << std::endl;
  NumericVector n_rank  = RcppDeepState_NumericVector();
  qs::c_qsave(n_rank,"/home/akhila/fuzzer_packages/fuzzedpackages/PLMIX/inst/testfiles/SimYpsilon/inputs/n_rank.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_rank values: "<< n_rank << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    SimYpsilon(rate,n_rank);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

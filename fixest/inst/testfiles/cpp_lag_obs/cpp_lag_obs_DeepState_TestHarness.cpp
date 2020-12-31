// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_lag_obs_DeepState_TestHarness_generation.cpp and cpp_lag_obs_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector cpp_lag_obs(IntegerVector id, IntegerVector time, int nlag);

TEST(fixest_deepstate_test,cpp_lag_obs_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector id  = RcppDeepState_IntegerVector();
  qs::c_qsave(id,"/home/akhila/fuzzer_packages/fuzzedpackages/fixest/inst/testfiles/cpp_lag_obs/inputs/id.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "id values: "<< id << std::endl;
  IntegerVector time  = RcppDeepState_IntegerVector();
  qs::c_qsave(time,"/home/akhila/fuzzer_packages/fuzzedpackages/fixest/inst/testfiles/cpp_lag_obs/inputs/time.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "time values: "<< time << std::endl;
  IntegerVector nlag(1);
  nlag[0]  = RcppDeepState_int();
  qs::c_qsave(nlag,"/home/akhila/fuzzer_packages/fuzzedpackages/fixest/inst/testfiles/cpp_lag_obs/inputs/nlag.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nlag values: "<< nlag << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_lag_obs(id,time,nlag[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
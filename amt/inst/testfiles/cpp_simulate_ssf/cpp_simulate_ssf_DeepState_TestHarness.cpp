// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_simulate_ssf_DeepState_TestHarness_generation.cpp and cpp_simulate_ssf_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector cpp_simulate_ssf(int n_steps, int start, int nc, int nr, NumericMatrix mk, NumericMatrix hk);

TEST(amt_deepstate_test,cpp_simulate_ssf_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector n_steps(1);
  n_steps[0]  = RcppDeepState_int();
  qs::c_qsave(n_steps,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/cpp_simulate_ssf/inputs/n_steps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_steps values: "<< n_steps << std::endl;
  IntegerVector start(1);
  start[0]  = RcppDeepState_int();
  qs::c_qsave(start,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/cpp_simulate_ssf/inputs/start.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "start values: "<< start << std::endl;
  IntegerVector nc(1);
  nc[0]  = RcppDeepState_int();
  qs::c_qsave(nc,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/cpp_simulate_ssf/inputs/nc.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nc values: "<< nc << std::endl;
  IntegerVector nr(1);
  nr[0]  = RcppDeepState_int();
  qs::c_qsave(nr,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/cpp_simulate_ssf/inputs/nr.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nr values: "<< nr << std::endl;
  NumericMatrix mk  = RcppDeepState_NumericMatrix();
  qs::c_qsave(mk,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/cpp_simulate_ssf/inputs/mk.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mk values: "<< mk << std::endl;
  NumericMatrix hk  = RcppDeepState_NumericMatrix();
  qs::c_qsave(hk,"/home/akhila/fuzzer_packages/fuzzedpackages/amt/inst/testfiles/cpp_simulate_ssf/inputs/hk.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "hk values: "<< hk << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_simulate_ssf(n_steps[0],start[0],nc[0],nr[0],mk,hk);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

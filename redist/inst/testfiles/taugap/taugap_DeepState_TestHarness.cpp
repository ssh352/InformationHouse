// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// taugap_DeepState_TestHarness_generation.cpp and taugap_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector taugap(double tau, NumericMatrix dvs, IntegerVector dseat_vec, int nd);

TEST(redist_deepstate_test,taugap_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector tau(1);
  tau[0]  = RcppDeepState_double();
  qs::c_qsave(tau,"/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/taugap/inputs/tau.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tau values: "<< tau << std::endl;
  NumericMatrix dvs  = RcppDeepState_NumericMatrix();
  qs::c_qsave(dvs,"/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/taugap/inputs/dvs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dvs values: "<< dvs << std::endl;
  IntegerVector dseat_vec  = RcppDeepState_IntegerVector();
  qs::c_qsave(dseat_vec,"/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/taugap/inputs/dseat_vec.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dseat_vec values: "<< dseat_vec << std::endl;
  IntegerVector nd(1);
  nd[0]  = RcppDeepState_int();
  qs::c_qsave(nd,"/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/taugap/inputs/nd.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nd values: "<< nd << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    taugap(tau[0],dvs,dseat_vec,nd[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

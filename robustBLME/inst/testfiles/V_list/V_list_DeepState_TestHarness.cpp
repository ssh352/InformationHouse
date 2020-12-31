// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// V_list_DeepState_TestHarness_generation.cpp and V_list_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List V_list(double sig2_b, double sig2_eps, arma::mat ZZt_b, arma::mat ZZt_b_ii, arma::mat ZZt_eps, arma::mat ZZt_eps_ii, int m_i);

TEST(robustBLME_deepstate_test,V_list_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector sig2_b(1);
  sig2_b[0]  = RcppDeepState_double();
  qs::c_qsave(sig2_b,"/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/sig2_b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sig2_b values: "<< sig2_b << std::endl;
  NumericVector sig2_eps(1);
  sig2_eps[0]  = RcppDeepState_double();
  qs::c_qsave(sig2_eps,"/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/sig2_eps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sig2_eps values: "<< sig2_eps << std::endl;
  std::ofstream ZZt_b_stream;
  NumericVector sig2_eps(1);
  sig2_eps[0]  = RcppDeepState_mat();
  ZZt_b_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/ZZt_b");
  ZZt_b_stream << ZZt_b;
  std::cout << "ZZt_b values: "<< ZZt_b << std::endl;
  ZZt_b_stream.close();
  std::ofstream ZZt_b_ii_stream;
  NumericVector sig2_eps(1);
  sig2_eps[0]  = RcppDeepState_mat();
  ZZt_b_ii_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/ZZt_b_ii");
  ZZt_b_ii_stream << ZZt_b_ii;
  std::cout << "ZZt_b_ii values: "<< ZZt_b_ii << std::endl;
  ZZt_b_ii_stream.close();
  std::ofstream ZZt_eps_stream;
  NumericVector sig2_eps(1);
  sig2_eps[0]  = RcppDeepState_mat();
  ZZt_eps_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/ZZt_eps");
  ZZt_eps_stream << ZZt_eps;
  std::cout << "ZZt_eps values: "<< ZZt_eps << std::endl;
  ZZt_eps_stream.close();
  std::ofstream ZZt_eps_ii_stream;
  NumericVector sig2_eps(1);
  sig2_eps[0]  = RcppDeepState_mat();
  ZZt_eps_ii_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/ZZt_eps_ii");
  ZZt_eps_ii_stream << ZZt_eps_ii;
  std::cout << "ZZt_eps_ii values: "<< ZZt_eps_ii << std::endl;
  ZZt_eps_ii_stream.close();
  IntegerVector m_i(1);
  m_i[0]  = RcppDeepState_int();
  qs::c_qsave(m_i,"/home/akhila/fuzzer_packages/fuzzedpackages/robustBLME/inst/testfiles/V_list/inputs/m_i.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m_i values: "<< m_i << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    V_list(sig2_b[0],sig2_eps[0],ZZt_b,ZZt_b_ii,ZZt_eps,ZZt_eps_ii,m_i[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

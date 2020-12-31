// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// likelihood_function2_exact_DeepState_TestHarness_generation.cpp and likelihood_function2_exact_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List likelihood_function2_exact(NumericVector y_temp, NumericMatrix treetable_temp, NumericMatrix obs_to_nodes_temp, double a, double mu, double nu, double lambda);

TEST(bartBMA_deepstate_test,likelihood_function2_exact_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector y_temp  = RcppDeepState_NumericVector();
  qs::c_qsave(y_temp,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/y_temp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y_temp values: "<< y_temp << std::endl;
  NumericMatrix treetable_temp  = RcppDeepState_NumericMatrix();
  qs::c_qsave(treetable_temp,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/treetable_temp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "treetable_temp values: "<< treetable_temp << std::endl;
  NumericMatrix obs_to_nodes_temp  = RcppDeepState_NumericMatrix();
  qs::c_qsave(obs_to_nodes_temp,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/obs_to_nodes_temp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "obs_to_nodes_temp values: "<< obs_to_nodes_temp << std::endl;
  NumericVector a(1);
  a[0]  = RcppDeepState_double();
  qs::c_qsave(a,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  NumericVector mu(1);
  mu[0]  = RcppDeepState_double();
  qs::c_qsave(mu,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/mu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mu values: "<< mu << std::endl;
  NumericVector nu(1);
  nu[0]  = RcppDeepState_double();
  qs::c_qsave(nu,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/nu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nu values: "<< nu << std::endl;
  NumericVector lambda(1);
  lambda[0]  = RcppDeepState_double();
  qs::c_qsave(lambda,"/home/akhila/fuzzer_packages/fuzzedpackages/bartBMA/inst/testfiles/likelihood_function2_exact/inputs/lambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda values: "<< lambda << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    likelihood_function2_exact(y_temp,treetable_temp,obs_to_nodes_temp,a[0],mu[0],nu[0],lambda[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
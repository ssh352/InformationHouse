// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// standardizeInputsEW_DeepState_TestHarness_generation.cpp and standardizeInputsEW_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector standardizeInputsEW(double x, double n_obs, double lambda, double current_mean, double current_var);

TEST(hermiter_deepstate_test,standardizeInputsEW_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x(1);
  x[0]  = RcppDeepState_double();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/standardizeInputsEW/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector n_obs(1);
  n_obs[0]  = RcppDeepState_double();
  qs::c_qsave(n_obs,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/standardizeInputsEW/inputs/n_obs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_obs values: "<< n_obs << std::endl;
  NumericVector lambda(1);
  lambda[0]  = RcppDeepState_double();
  qs::c_qsave(lambda,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/standardizeInputsEW/inputs/lambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda values: "<< lambda << std::endl;
  NumericVector current_mean(1);
  current_mean[0]  = RcppDeepState_double();
  qs::c_qsave(current_mean,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/standardizeInputsEW/inputs/current_mean.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "current_mean values: "<< current_mean << std::endl;
  NumericVector current_var(1);
  current_var[0]  = RcppDeepState_double();
  qs::c_qsave(current_var,"/home/akhila/fuzzer_packages/fuzzedpackages/hermiter/inst/testfiles/standardizeInputsEW/inputs/current_var.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "current_var values: "<< current_var << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    standardizeInputsEW(x[0],n_obs[0],lambda[0],current_mean[0],current_var[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

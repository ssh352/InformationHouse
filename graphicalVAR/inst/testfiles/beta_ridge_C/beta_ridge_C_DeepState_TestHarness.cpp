// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// beta_ridge_C_DeepState_TestHarness_generation.cpp and beta_ridge_C_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix beta_ridge_C(NumericMatrix X, NumericMatrix Y, double lambda_beta);

TEST(graphicalVAR_deepstate_test,beta_ridge_C_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix X  = RcppDeepState_NumericMatrix();
  qs::c_qsave(X,"/home/akhila/fuzzer_packages/fuzzedpackages/graphicalVAR/inst/testfiles/beta_ridge_C/inputs/X.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  NumericMatrix Y  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Y,"/home/akhila/fuzzer_packages/fuzzedpackages/graphicalVAR/inst/testfiles/beta_ridge_C/inputs/Y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Y values: "<< Y << std::endl;
  NumericVector lambda_beta(1);
  lambda_beta[0]  = RcppDeepState_double();
  qs::c_qsave(lambda_beta,"/home/akhila/fuzzer_packages/fuzzedpackages/graphicalVAR/inst/testfiles/beta_ridge_C/inputs/lambda_beta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda_beta values: "<< lambda_beta << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    beta_ridge_C(X,Y,lambda_beta[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

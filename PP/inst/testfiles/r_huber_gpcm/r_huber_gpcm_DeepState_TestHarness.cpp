// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// r_huber_gpcm_DeepState_TestHarness_generation.cpp and r_huber_gpcm_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double r_huber_gpcm(NumericVector delta, double alpha, double theta, double H);

TEST(PP_deepstate_test,r_huber_gpcm_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector delta  = RcppDeepState_NumericVector();
  qs::c_qsave(delta,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/r_huber_gpcm/inputs/delta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "delta values: "<< delta << std::endl;
  NumericVector alpha(1);
  alpha[0]  = RcppDeepState_double();
  qs::c_qsave(alpha,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/r_huber_gpcm/inputs/alpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  NumericVector theta(1);
  theta[0]  = RcppDeepState_double();
  qs::c_qsave(theta,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/r_huber_gpcm/inputs/theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericVector H(1);
  H[0]  = RcppDeepState_double();
  qs::c_qsave(H,"/home/akhila/fuzzer_packages/fuzzedpackages/PP/inst/testfiles/r_huber_gpcm/inputs/H.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "H values: "<< H << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    r_huber_gpcm(delta,alpha[0],theta[0],H[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// loglikCD_DeepState_TestHarness_generation.cpp and loglikCD_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double loglikCD(NumericVector parm, NumericMatrix Dmat, NumericVector x);

TEST(icRSF_deepstate_test,loglikCD_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector parm  = RcppDeepState_NumericVector();
  qs::c_qsave(parm,"/home/akhila/fuzzer_packages/fuzzedpackages/icRSF/inst/testfiles/loglikCD/inputs/parm.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parm values: "<< parm << std::endl;
  NumericMatrix Dmat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Dmat,"/home/akhila/fuzzer_packages/fuzzedpackages/icRSF/inst/testfiles/loglikCD/inputs/Dmat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Dmat values: "<< Dmat << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/icRSF/inst/testfiles/loglikCD/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    loglikCD(parm,Dmat,x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

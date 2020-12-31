// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// gradlikC0_DeepState_TestHarness_generation.cpp and gradlikC0_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector gradlikC0(NumericVector parm, NumericMatrix Dmat);

TEST(icRSF_deepstate_test,gradlikC0_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector parm  = RcppDeepState_NumericVector();
  qs::c_qsave(parm,"/home/akhila/fuzzer_packages/fuzzedpackages/icRSF/inst/testfiles/gradlikC0/inputs/parm.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parm values: "<< parm << std::endl;
  NumericMatrix Dmat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Dmat,"/home/akhila/fuzzer_packages/fuzzedpackages/icRSF/inst/testfiles/gradlikC0/inputs/Dmat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Dmat values: "<< Dmat << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    gradlikC0(parm,Dmat);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

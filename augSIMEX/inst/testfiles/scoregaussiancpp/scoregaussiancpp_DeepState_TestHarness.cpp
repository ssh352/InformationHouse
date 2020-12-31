// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// scoregaussiancpp_DeepState_TestHarness_generation.cpp and scoregaussiancpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector scoregaussiancpp(NumericVector beta, NumericVector Y, NumericMatrix DataM, NumericMatrix DataM0, NumericMatrix DataM1, NumericVector phat, NumericVector qhat, NumericVector weight, NumericVector offset);

TEST(augSIMEX_deepstate_test,scoregaussiancpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector beta  = RcppDeepState_NumericVector();
  qs::c_qsave(beta,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/beta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "beta values: "<< beta << std::endl;
  NumericVector Y  = RcppDeepState_NumericVector();
  qs::c_qsave(Y,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/Y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Y values: "<< Y << std::endl;
  NumericMatrix DataM  = RcppDeepState_NumericMatrix();
  qs::c_qsave(DataM,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/DataM.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "DataM values: "<< DataM << std::endl;
  NumericMatrix DataM0  = RcppDeepState_NumericMatrix();
  qs::c_qsave(DataM0,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/DataM0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "DataM0 values: "<< DataM0 << std::endl;
  NumericMatrix DataM1  = RcppDeepState_NumericMatrix();
  qs::c_qsave(DataM1,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/DataM1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "DataM1 values: "<< DataM1 << std::endl;
  NumericVector phat  = RcppDeepState_NumericVector();
  qs::c_qsave(phat,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/phat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "phat values: "<< phat << std::endl;
  NumericVector qhat  = RcppDeepState_NumericVector();
  qs::c_qsave(qhat,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/qhat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "qhat values: "<< qhat << std::endl;
  NumericVector weight  = RcppDeepState_NumericVector();
  qs::c_qsave(weight,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/weight.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weight values: "<< weight << std::endl;
  NumericVector offset  = RcppDeepState_NumericVector();
  qs::c_qsave(offset,"/home/akhila/fuzzer_packages/fuzzedpackages/augSIMEX/inst/testfiles/scoregaussiancpp/inputs/offset.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "offset values: "<< offset << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    scoregaussiancpp(beta,Y,DataM,DataM0,DataM1,phat,qhat,weight,offset);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
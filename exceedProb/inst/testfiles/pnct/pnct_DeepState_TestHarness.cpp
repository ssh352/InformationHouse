// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pnct_DeepState_TestHarness_generation.cpp and pnct_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double pnct(const double x, const double df, const double ncp);

TEST(exceedProb_deepstate_test,pnct_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x(1);
  x[0]  = RcppDeepState_double();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/exceedProb/inst/testfiles/pnct/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector df(1);
  df[0]  = RcppDeepState_double();
  qs::c_qsave(df,"/home/akhila/fuzzer_packages/fuzzedpackages/exceedProb/inst/testfiles/pnct/inputs/df.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "df values: "<< df << std::endl;
  NumericVector ncp(1);
  ncp[0]  = RcppDeepState_double();
  qs::c_qsave(ncp,"/home/akhila/fuzzer_packages/fuzzedpackages/exceedProb/inst/testfiles/pnct/inputs/ncp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ncp values: "<< ncp << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pnct(x[0],df[0],ncp[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

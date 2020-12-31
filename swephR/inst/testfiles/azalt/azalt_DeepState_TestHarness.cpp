// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// azalt_DeepState_TestHarness_generation.cpp and azalt_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List azalt(double jd_ut, int coord_flag, Rcpp::NumericVector geopos, double atpress, double attemp, Rcpp::NumericVector xin);

TEST(swephR_deepstate_test,azalt_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector jd_ut(1);
  jd_ut[0]  = RcppDeepState_double();
  qs::c_qsave(jd_ut,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/azalt/inputs/jd_ut.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "jd_ut values: "<< jd_ut << std::endl;
  IntegerVector coord_flag(1);
  coord_flag[0]  = RcppDeepState_int();
  qs::c_qsave(coord_flag,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/azalt/inputs/coord_flag.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "coord_flag values: "<< coord_flag << std::endl;
  NumericVector geopos  = RcppDeepState_NumericVector();
  qs::c_qsave(geopos,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/azalt/inputs/geopos.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "geopos values: "<< geopos << std::endl;
  NumericVector atpress(1);
  atpress[0]  = RcppDeepState_double();
  qs::c_qsave(atpress,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/azalt/inputs/atpress.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "atpress values: "<< atpress << std::endl;
  NumericVector attemp(1);
  attemp[0]  = RcppDeepState_double();
  qs::c_qsave(attemp,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/azalt/inputs/attemp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "attemp values: "<< attemp << std::endl;
  NumericVector xin  = RcppDeepState_NumericVector();
  qs::c_qsave(xin,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/azalt/inputs/xin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xin values: "<< xin << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    azalt(jd_ut[0],coord_flag[0],geopos,atpress[0],attemp[0],xin);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
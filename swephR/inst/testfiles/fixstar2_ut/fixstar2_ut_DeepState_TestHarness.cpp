// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fixstar2_ut_DeepState_TestHarness_generation.cpp and fixstar2_ut_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List fixstar2_ut(Rcpp::CharacterVector starname, Rcpp::NumericVector jd_ut, int iflag);

TEST(swephR_deepstate_test,fixstar2_ut_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector starname  = RcppDeepState_CharacterVector();
  qs::c_qsave(starname,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/fixstar2_ut/inputs/starname.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "starname values: "<< starname << std::endl;
  NumericVector jd_ut  = RcppDeepState_NumericVector();
  qs::c_qsave(jd_ut,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/fixstar2_ut/inputs/jd_ut.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "jd_ut values: "<< jd_ut << std::endl;
  IntegerVector iflag(1);
  iflag[0]  = RcppDeepState_int();
  qs::c_qsave(iflag,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/fixstar2_ut/inputs/iflag.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "iflag values: "<< iflag << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fixstar2_ut(starname,jd_ut,iflag[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

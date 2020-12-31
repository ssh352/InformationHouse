// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// stat_binom_cpp_DeepState_TestHarness_generation.cpp and stat_binom_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector stat_binom_cpp(NumericVector yin, NumericVector yout, double ty, NumericVector popin, NumericVector popout, double tpop);

TEST(smerc_deepstate_test,stat_binom_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector yin  = RcppDeepState_NumericVector();
  qs::c_qsave(yin,"/home/akhila/fuzzer_packages/fuzzedpackages/smerc/inst/testfiles/stat_binom_cpp/inputs/yin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yin values: "<< yin << std::endl;
  NumericVector yout  = RcppDeepState_NumericVector();
  qs::c_qsave(yout,"/home/akhila/fuzzer_packages/fuzzedpackages/smerc/inst/testfiles/stat_binom_cpp/inputs/yout.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yout values: "<< yout << std::endl;
  NumericVector ty(1);
  ty[0]  = RcppDeepState_double();
  qs::c_qsave(ty,"/home/akhila/fuzzer_packages/fuzzedpackages/smerc/inst/testfiles/stat_binom_cpp/inputs/ty.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ty values: "<< ty << std::endl;
  NumericVector popin  = RcppDeepState_NumericVector();
  qs::c_qsave(popin,"/home/akhila/fuzzer_packages/fuzzedpackages/smerc/inst/testfiles/stat_binom_cpp/inputs/popin.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "popin values: "<< popin << std::endl;
  NumericVector popout  = RcppDeepState_NumericVector();
  qs::c_qsave(popout,"/home/akhila/fuzzer_packages/fuzzedpackages/smerc/inst/testfiles/stat_binom_cpp/inputs/popout.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "popout values: "<< popout << std::endl;
  NumericVector tpop(1);
  tpop[0]  = RcppDeepState_double();
  qs::c_qsave(tpop,"/home/akhila/fuzzer_packages/fuzzedpackages/smerc/inst/testfiles/stat_binom_cpp/inputs/tpop.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tpop values: "<< tpop << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    stat_binom_cpp(yin,yout,ty[0],popin,popout,tpop[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

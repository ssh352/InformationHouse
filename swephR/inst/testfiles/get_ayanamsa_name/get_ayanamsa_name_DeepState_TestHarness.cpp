// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get_ayanamsa_name_DeepState_TestHarness_generation.cpp and get_ayanamsa_name_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

std::string get_ayanamsa_name(int sid_mode);

TEST(swephR_deepstate_test,get_ayanamsa_name_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector sid_mode(1);
  sid_mode[0]  = RcppDeepState_int();
  qs::c_qsave(sid_mode,"/home/akhila/fuzzer_packages/fuzzedpackages/swephR/inst/testfiles/get_ayanamsa_name/inputs/sid_mode.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sid_mode values: "<< sid_mode << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_ayanamsa_name(sid_mode[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// MaxMincpp_DeepState_TestHarness_generation.cpp and MaxMincpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector MaxMincpp(NumericMatrix locations);

TEST(GPvecchia_deepstate_test,MaxMincpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix locations  = RcppDeepState_NumericMatrix();
  qs::c_qsave(locations,"/home/akhila/fuzzer_packages/fuzzedpackages/GPvecchia/inst/testfiles/MaxMincpp/inputs/locations.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "locations values: "<< locations << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    MaxMincpp(locations);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

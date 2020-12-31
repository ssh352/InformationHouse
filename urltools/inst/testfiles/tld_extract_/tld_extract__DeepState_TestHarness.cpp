// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// tld_extract__DeepState_TestHarness_generation.cpp and tld_extract__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

CharacterVector tld_extract_(CharacterVector domains);

TEST(urltools_deepstate_test,tld_extract__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector domains  = RcppDeepState_CharacterVector();
  qs::c_qsave(domains,"/home/akhila/fuzzer_packages/fuzzedpackages/urltools/inst/testfiles/tld_extract_/inputs/domains.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "domains values: "<< domains << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    tld_extract_(domains);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
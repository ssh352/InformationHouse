// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// url_parse_DeepState_TestHarness_generation.cpp and url_parse_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

DataFrame url_parse(CharacterVector urls);

TEST(urltools_deepstate_test,url_parse_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector urls  = RcppDeepState_CharacterVector();
  qs::c_qsave(urls,"/home/akhila/fuzzer_packages/fuzzedpackages/urltools/inst/testfiles/url_parse/inputs/urls.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "urls values: "<< urls << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    url_parse(urls);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
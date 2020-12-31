// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get__DeepState_TestHarness_generation.cpp and get__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

CharacterVector get_(CharacterVector names, int element);

TEST(humaniformat_deepstate_test,get__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector names  = RcppDeepState_CharacterVector();
  qs::c_qsave(names,"/home/akhila/fuzzer_packages/fuzzedpackages/humaniformat/inst/testfiles/get_/inputs/names.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "names values: "<< names << std::endl;
  IntegerVector element(1);
  element[0]  = RcppDeepState_int();
  qs::c_qsave(element,"/home/akhila/fuzzer_packages/fuzzedpackages/humaniformat/inst/testfiles/get_/inputs/element.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "element values: "<< element << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    get_(names,element[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// is_equal_str_DeepState_TestHarness_generation.cpp and is_equal_str_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

bool is_equal_str(CharacterVector a, CharacterVector b);

TEST(jmotif_deepstate_test,is_equal_str_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector a  = RcppDeepState_CharacterVector();
  qs::c_qsave(a,"/home/akhila/fuzzer_packages/fuzzedpackages/jmotif/inst/testfiles/is_equal_str/inputs/a.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  CharacterVector b  = RcppDeepState_CharacterVector();
  qs::c_qsave(b,"/home/akhila/fuzzer_packages/fuzzedpackages/jmotif/inst/testfiles/is_equal_str/inputs/b.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    is_equal_str(a,b);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

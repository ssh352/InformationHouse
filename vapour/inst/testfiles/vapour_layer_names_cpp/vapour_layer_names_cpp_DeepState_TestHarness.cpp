// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// vapour_layer_names_cpp_DeepState_TestHarness_generation.cpp and vapour_layer_names_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::CharacterVector vapour_layer_names_cpp(Rcpp::CharacterVector dsource, Rcpp::CharacterVector sql);

TEST(vapour_deepstate_test,vapour_layer_names_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector dsource  = RcppDeepState_CharacterVector();
  qs::c_qsave(dsource,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_layer_names_cpp/inputs/dsource.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dsource values: "<< dsource << std::endl;
  CharacterVector sql  = RcppDeepState_CharacterVector();
  qs::c_qsave(sql,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_layer_names_cpp/inputs/sql.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sql values: "<< sql << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    vapour_layer_names_cpp(dsource,sql);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
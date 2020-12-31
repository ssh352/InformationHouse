// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// calculate_test_error__DeepState_TestHarness_generation.cpp and calculate_test_error__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double calculate_test_error_(IntegerVector vardep, IntegerVector predicted_class_int);

TEST(fastAdaboost_deepstate_test,calculate_test_error__test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector vardep  = RcppDeepState_IntegerVector();
  qs::c_qsave(vardep,"/home/akhila/fuzzer_packages/fuzzedpackages/fastAdaboost/inst/testfiles/calculate_test_error_/inputs/vardep.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vardep values: "<< vardep << std::endl;
  IntegerVector predicted_class_int  = RcppDeepState_IntegerVector();
  qs::c_qsave(predicted_class_int,"/home/akhila/fuzzer_packages/fuzzedpackages/fastAdaboost/inst/testfiles/calculate_test_error_/inputs/predicted_class_int.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "predicted_class_int values: "<< predicted_class_int << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    calculate_test_error_(vardep,predicted_class_int);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// rcpp_create_new_weight_vector_DeepState_TestHarness_generation.cpp and rcpp_create_new_weight_vector_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector rcpp_create_new_weight_vector(NumericMatrix vic, int loci);

TEST(disclapmix_deepstate_test,rcpp_create_new_weight_vector_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix vic  = RcppDeepState_NumericMatrix();
  qs::c_qsave(vic,"/home/akhila/fuzzer_packages/fuzzedpackages/disclapmix/inst/testfiles/rcpp_create_new_weight_vector/inputs/vic.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vic values: "<< vic << std::endl;
  IntegerVector loci(1);
  loci[0]  = RcppDeepState_int();
  qs::c_qsave(loci,"/home/akhila/fuzzer_packages/fuzzedpackages/disclapmix/inst/testfiles/rcpp_create_new_weight_vector/inputs/loci.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "loci values: "<< loci << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    rcpp_create_new_weight_vector(vic,loci[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

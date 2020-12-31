// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ComputeMeans_DeepState_TestHarness_generation.cpp and ComputeMeans_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix ComputeMeans(IntegerVector cm, NumericMatrix data, NumericVector weight, int nclust);

TEST(lsbclust_deepstate_test,ComputeMeans_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector cm  = RcppDeepState_IntegerVector();
  qs::c_qsave(cm,"/home/akhila/fuzzer_packages/fuzzedpackages/lsbclust/inst/testfiles/ComputeMeans/inputs/cm.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cm values: "<< cm << std::endl;
  NumericMatrix data  = RcppDeepState_NumericMatrix();
  qs::c_qsave(data,"/home/akhila/fuzzer_packages/fuzzedpackages/lsbclust/inst/testfiles/ComputeMeans/inputs/data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "data values: "<< data << std::endl;
  NumericVector weight  = RcppDeepState_NumericVector();
  qs::c_qsave(weight,"/home/akhila/fuzzer_packages/fuzzedpackages/lsbclust/inst/testfiles/ComputeMeans/inputs/weight.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weight values: "<< weight << std::endl;
  IntegerVector nclust(1);
  nclust[0]  = RcppDeepState_int();
  qs::c_qsave(nclust,"/home/akhila/fuzzer_packages/fuzzedpackages/lsbclust/inst/testfiles/ComputeMeans/inputs/nclust.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nclust values: "<< nclust << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ComputeMeans(cm,data,weight,nclust[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

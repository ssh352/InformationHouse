// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// splitTreemap_DeepState_TestHarness_generation.cpp and splitTreemap_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix splitTreemap(IntegerVector parent, IntegerVector order, NumericVector weight, double width, double height);

TEST(ggraph_deepstate_test,splitTreemap_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector parent  = RcppDeepState_IntegerVector();
  qs::c_qsave(parent,"/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/inputs/parent.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parent values: "<< parent << std::endl;
  IntegerVector order  = RcppDeepState_IntegerVector();
  qs::c_qsave(order,"/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/inputs/order.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "order values: "<< order << std::endl;
  NumericVector weight  = RcppDeepState_NumericVector();
  qs::c_qsave(weight,"/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/inputs/weight.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weight values: "<< weight << std::endl;
  NumericVector width(1);
  width[0]  = RcppDeepState_double();
  qs::c_qsave(width,"/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/inputs/width.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "width values: "<< width << std::endl;
  NumericVector height(1);
  height[0]  = RcppDeepState_double();
  qs::c_qsave(height,"/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/inputs/height.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "height values: "<< height << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    splitTreemap(parent,order,weight,width[0],height[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

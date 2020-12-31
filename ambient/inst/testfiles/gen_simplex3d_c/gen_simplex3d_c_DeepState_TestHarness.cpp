// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// gen_simplex3d_c_DeepState_TestHarness_generation.cpp and gen_simplex3d_c_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector gen_simplex3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed);

TEST(ambient_deepstate_test,gen_simplex3d_c_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/gen_simplex3d_c/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/gen_simplex3d_c/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector z  = RcppDeepState_NumericVector();
  qs::c_qsave(z,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/gen_simplex3d_c/inputs/z.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z values: "<< z << std::endl;
  NumericVector freq(1);
  freq[0]  = RcppDeepState_double();
  qs::c_qsave(freq,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/gen_simplex3d_c/inputs/freq.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "freq values: "<< freq << std::endl;
  IntegerVector seed(1);
  seed[0]  = RcppDeepState_int();
  qs::c_qsave(seed,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/gen_simplex3d_c/inputs/seed.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "seed values: "<< seed << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    gen_simplex3d_c(x,y,z,freq[0],seed[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

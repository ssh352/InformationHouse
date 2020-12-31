// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// np_m8_con_DeepState_TestHarness_generation.cpp and np_m8_con_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List np_m8_con(int NZ, int NP, NumericMatrix W);

TEST(bmotif_deepstate_test,np_m8_con_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector NZ(1);
  NZ[0]  = RcppDeepState_int();
  qs::c_qsave(NZ,"/home/akhila/fuzzer_packages/fuzzedpackages/bmotif/inst/testfiles/np_m8_con/inputs/NZ.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NZ values: "<< NZ << std::endl;
  IntegerVector NP(1);
  NP[0]  = RcppDeepState_int();
  qs::c_qsave(NP,"/home/akhila/fuzzer_packages/fuzzedpackages/bmotif/inst/testfiles/np_m8_con/inputs/NP.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NP values: "<< NP << std::endl;
  NumericMatrix W  = RcppDeepState_NumericMatrix();
  qs::c_qsave(W,"/home/akhila/fuzzer_packages/fuzzedpackages/bmotif/inst/testfiles/np_m8_con/inputs/W.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "W values: "<< W << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    np_m8_con(NZ[0],NP[0],W);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

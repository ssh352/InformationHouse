// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// extractMandatory_DeepState_TestHarness_generation.cpp and extractMandatory_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List extractMandatory(CharacterVector x, CharacterVector command, int nCommands);

TEST(hutilscpp_deepstate_test,extractMandatory_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector x  = RcppDeepState_CharacterVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/hutilscpp/inst/testfiles/extractMandatory/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  CharacterVector command  = RcppDeepState_CharacterVector();
  qs::c_qsave(command,"/home/akhila/fuzzer_packages/fuzzedpackages/hutilscpp/inst/testfiles/extractMandatory/inputs/command.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "command values: "<< command << std::endl;
  IntegerVector nCommands(1);
  nCommands[0]  = RcppDeepState_int();
  qs::c_qsave(nCommands,"/home/akhila/fuzzer_packages/fuzzedpackages/hutilscpp/inst/testfiles/extractMandatory/inputs/nCommands.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nCommands values: "<< nCommands << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    extractMandatory(x,command,nCommands[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

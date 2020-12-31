// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// varEst_DeepState_TestHarness_generation.cpp and varEst_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List varEst(Rcpp::NumericVector fam_group, Rcpp::NumericVector alpha, Rcpp::NumericVector dtime, Rcpp::NumericVector delta, Rcpp::NumericVector g, double beta, double lower, double upper);

TEST(lclGWAS_deepstate_test,varEst_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector fam_group  = RcppDeepState_NumericVector();
  qs::c_qsave(fam_group,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/fam_group.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fam_group values: "<< fam_group << std::endl;
  NumericVector alpha  = RcppDeepState_NumericVector();
  qs::c_qsave(alpha,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/alpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  NumericVector dtime  = RcppDeepState_NumericVector();
  qs::c_qsave(dtime,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/dtime.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dtime values: "<< dtime << std::endl;
  NumericVector delta  = RcppDeepState_NumericVector();
  qs::c_qsave(delta,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/delta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "delta values: "<< delta << std::endl;
  NumericVector g  = RcppDeepState_NumericVector();
  qs::c_qsave(g,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/g.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "g values: "<< g << std::endl;
  NumericVector beta(1);
  beta[0]  = RcppDeepState_double();
  qs::c_qsave(beta,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/beta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "beta values: "<< beta << std::endl;
  NumericVector lower(1);
  lower[0]  = RcppDeepState_double();
  qs::c_qsave(lower,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/lower.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lower values: "<< lower << std::endl;
  NumericVector upper(1);
  upper[0]  = RcppDeepState_double();
  qs::c_qsave(upper,"/home/akhila/fuzzer_packages/fuzzedpackages/lclGWAS/inst/testfiles/varEst/inputs/upper.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "upper values: "<< upper << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    varEst(fam_group,alpha,dtime,delta,g,beta[0],lower[0],upper[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

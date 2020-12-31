// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// parallel_sim_DeepState_TestHarness_generation.cpp and parallel_sim_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat parallel_sim(const int n_datasets, const int n_vars, const int N, const int eigen_type, const int maxit);

TEST(EFAtools_deepstate_test,parallel_sim_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector n_datasets(1);
  n_datasets[0]  = RcppDeepState_int();
  qs::c_qsave(n_datasets,"/home/akhila/fuzzer_packages/fuzzedpackages/EFAtools/inst/testfiles/parallel_sim/inputs/n_datasets.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_datasets values: "<< n_datasets << std::endl;
  IntegerVector n_vars(1);
  n_vars[0]  = RcppDeepState_int();
  qs::c_qsave(n_vars,"/home/akhila/fuzzer_packages/fuzzedpackages/EFAtools/inst/testfiles/parallel_sim/inputs/n_vars.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_vars values: "<< n_vars << std::endl;
  IntegerVector N(1);
  N[0]  = RcppDeepState_int();
  qs::c_qsave(N,"/home/akhila/fuzzer_packages/fuzzedpackages/EFAtools/inst/testfiles/parallel_sim/inputs/N.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "N values: "<< N << std::endl;
  IntegerVector eigen_type(1);
  eigen_type[0]  = RcppDeepState_int();
  qs::c_qsave(eigen_type,"/home/akhila/fuzzer_packages/fuzzedpackages/EFAtools/inst/testfiles/parallel_sim/inputs/eigen_type.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eigen_type values: "<< eigen_type << std::endl;
  IntegerVector maxit(1);
  maxit[0]  = RcppDeepState_int();
  qs::c_qsave(maxit,"/home/akhila/fuzzer_packages/fuzzedpackages/EFAtools/inst/testfiles/parallel_sim/inputs/maxit.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxit values: "<< maxit << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    parallel_sim(n_datasets[0],n_vars[0],N[0],eigen_type[0],maxit[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

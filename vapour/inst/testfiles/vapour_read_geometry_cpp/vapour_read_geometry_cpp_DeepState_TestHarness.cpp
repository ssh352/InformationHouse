// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// vapour_read_geometry_cpp_DeepState_TestHarness_generation.cpp and vapour_read_geometry_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List vapour_read_geometry_cpp(Rcpp::CharacterVector dsource, Rcpp::IntegerVector layer, Rcpp::CharacterVector sql, Rcpp::CharacterVector what, Rcpp::CharacterVector textformat, Rcpp::IntegerVector limit_n, Rcpp::IntegerVector skip_n, Rcpp::NumericVector ex);

TEST(vapour_deepstate_test,vapour_read_geometry_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector dsource  = RcppDeepState_CharacterVector();
  qs::c_qsave(dsource,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/dsource.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dsource values: "<< dsource << std::endl;
  IntegerVector layer  = RcppDeepState_IntegerVector();
  qs::c_qsave(layer,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/layer.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "layer values: "<< layer << std::endl;
  CharacterVector sql  = RcppDeepState_CharacterVector();
  qs::c_qsave(sql,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/sql.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sql values: "<< sql << std::endl;
  CharacterVector what  = RcppDeepState_CharacterVector();
  qs::c_qsave(what,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/what.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "what values: "<< what << std::endl;
  CharacterVector textformat  = RcppDeepState_CharacterVector();
  qs::c_qsave(textformat,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/textformat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "textformat values: "<< textformat << std::endl;
  IntegerVector limit_n  = RcppDeepState_IntegerVector();
  qs::c_qsave(limit_n,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/limit_n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "limit_n values: "<< limit_n << std::endl;
  IntegerVector skip_n  = RcppDeepState_IntegerVector();
  qs::c_qsave(skip_n,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/skip_n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "skip_n values: "<< skip_n << std::endl;
  NumericVector ex  = RcppDeepState_NumericVector();
  qs::c_qsave(ex,"/home/akhila/fuzzer_packages/fuzzedpackages/vapour/inst/testfiles/vapour_read_geometry_cpp/inputs/ex.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ex values: "<< ex << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    vapour_read_geometry_cpp(dsource,layer,sql,what,textformat,limit_n,skip_n,ex);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}

// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// worley_2d_c_DeepState_TestHarness_generation.cpp and worley_2d_c_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix worley_2d_c(int height, int width, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int dist, int value, IntegerVector dist2ind, double jitter, int pertube, double pertube_amp);

TEST(ambient_deepstate_test,worley_2d_c_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector height(1);
  height[0]  = RcppDeepState_int();
  qs::c_qsave(height,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/height.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "height values: "<< height << std::endl;
  IntegerVector width(1);
  width[0]  = RcppDeepState_int();
  qs::c_qsave(width,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/width.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "width values: "<< width << std::endl;
  IntegerVector seed(1);
  seed[0]  = RcppDeepState_int();
  qs::c_qsave(seed,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/seed.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "seed values: "<< seed << std::endl;
  NumericVector freq(1);
  freq[0]  = RcppDeepState_double();
  qs::c_qsave(freq,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/freq.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "freq values: "<< freq << std::endl;
  IntegerVector fractal(1);
  fractal[0]  = RcppDeepState_int();
  qs::c_qsave(fractal,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/fractal.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fractal values: "<< fractal << std::endl;
  IntegerVector octaves(1);
  octaves[0]  = RcppDeepState_int();
  qs::c_qsave(octaves,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/octaves.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "octaves values: "<< octaves << std::endl;
  NumericVector lacunarity(1);
  lacunarity[0]  = RcppDeepState_double();
  qs::c_qsave(lacunarity,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/lacunarity.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lacunarity values: "<< lacunarity << std::endl;
  NumericVector gain(1);
  gain[0]  = RcppDeepState_double();
  qs::c_qsave(gain,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/gain.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "gain values: "<< gain << std::endl;
  IntegerVector dist(1);
  dist[0]  = RcppDeepState_int();
  qs::c_qsave(dist,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/dist.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dist values: "<< dist << std::endl;
  IntegerVector value(1);
  value[0]  = RcppDeepState_int();
  qs::c_qsave(value,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/value.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "value values: "<< value << std::endl;
  IntegerVector dist2ind  = RcppDeepState_IntegerVector();
  qs::c_qsave(dist2ind,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/dist2ind.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dist2ind values: "<< dist2ind << std::endl;
  NumericVector jitter(1);
  jitter[0]  = RcppDeepState_double();
  qs::c_qsave(jitter,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/jitter.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "jitter values: "<< jitter << std::endl;
  IntegerVector pertube(1);
  pertube[0]  = RcppDeepState_int();
  qs::c_qsave(pertube,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/pertube.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pertube values: "<< pertube << std::endl;
  NumericVector pertube_amp(1);
  pertube_amp[0]  = RcppDeepState_double();
  qs::c_qsave(pertube_amp,"/home/akhila/fuzzer_packages/fuzzedpackages/ambient/inst/testfiles/worley_2d_c/inputs/pertube_amp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pertube_amp values: "<< pertube_amp << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    worley_2d_c(height[0],width[0],seed[0],freq[0],fractal[0],octaves[0],lacunarity[0],gain[0],dist[0],value[0],dist2ind,jitter[0],pertube[0],pertube_amp[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
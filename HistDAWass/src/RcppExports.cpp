// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// whichLowerEQThanX
int whichLowerEQThanX(NumericVector x, double y);
RcppExport SEXP _HistDAWass_whichLowerEQThanX(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(whichLowerEQThanX(x, y));
    return rcpp_result_gen;
END_RCPP
}
// COMP_Q_VECT
NumericVector COMP_Q_VECT(NumericVector x, NumericVector p, NumericVector vp);
RcppExport SEXP _HistDAWass_COMP_Q_VECT(SEXP xSEXP, SEXP pSEXP, SEXP vpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vp(vpSEXP);
    rcpp_result_gen = Rcpp::wrap(COMP_Q_VECT(x, p, vp));
    return rcpp_result_gen;
END_RCPP
}
// concatenate_and_sort
NumericVector concatenate_and_sort(NumericVector a, NumericVector b);
RcppExport SEXP _HistDAWass_concatenate_and_sort(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(concatenate_and_sort(a, b));
    return rcpp_result_gen;
END_RCPP
}
// REGISTER2
List REGISTER2(S4 a, S4 b);
RcppExport SEXP _HistDAWass_REGISTER2(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type a(aSEXP);
    Rcpp::traits::input_parameter< S4 >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(REGISTER2(a, b));
    return rcpp_result_gen;
END_RCPP
}
// PREPARE_A_VEC_MAT
List PREPARE_A_VEC_MAT(S4 MAT);
RcppExport SEXP _HistDAWass_PREPARE_A_VEC_MAT(SEXP MATSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type MAT(MATSEXP);
    rcpp_result_gen = Rcpp::wrap(PREPARE_A_VEC_MAT(MAT));
    return rcpp_result_gen;
END_RCPP
}
// MEDIA_V
S4 MEDIA_V(S4 MAT, NumericVector wei);
RcppExport SEXP _HistDAWass_MEDIA_V(SEXP MATSEXP, SEXP weiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type MAT(MATSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wei(weiSEXP);
    rcpp_result_gen = Rcpp::wrap(MEDIA_V(MAT, wei));
    return rcpp_result_gen;
END_RCPP
}
// SSQ_RCPP
NumericMatrix SSQ_RCPP(S4 MAT, NumericVector wei);
RcppExport SEXP _HistDAWass_SSQ_RCPP(SEXP MATSEXP, SEXP weiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type MAT(MATSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wei(weiSEXP);
    rcpp_result_gen = Rcpp::wrap(SSQ_RCPP(MAT, wei));
    return rcpp_result_gen;
END_RCPP
}
// COV_RCPP
NumericMatrix COV_RCPP(S4 MAT, NumericVector wei);
RcppExport SEXP _HistDAWass_COV_RCPP(SEXP MATSEXP, SEXP weiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type MAT(MATSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wei(weiSEXP);
    rcpp_result_gen = Rcpp::wrap(COV_RCPP(MAT, wei));
    return rcpp_result_gen;
END_RCPP
}
// CORR_RCPP
NumericMatrix CORR_RCPP(S4 MAT, NumericVector wei);
RcppExport SEXP _HistDAWass_CORR_RCPP(SEXP MATSEXP, SEXP weiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type MAT(MATSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wei(weiSEXP);
    rcpp_result_gen = Rcpp::wrap(CORR_RCPP(MAT, wei));
    return rcpp_result_gen;
END_RCPP
}
// M_STD_H
NumericVector M_STD_H(S4 o);
RcppExport SEXP _HistDAWass_M_STD_H(SEXP oSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type o(oSEXP);
    rcpp_result_gen = Rcpp::wrap(M_STD_H(o));
    return rcpp_result_gen;
END_RCPP
}
// c_MM_L2_SQ_WASS_D
double c_MM_L2_SQ_WASS_D(NumericMatrix MM);
RcppExport SEXP _HistDAWass_c_MM_L2_SQ_WASS_D(SEXP MMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type MM(MMSEXP);
    rcpp_result_gen = Rcpp::wrap(c_MM_L2_SQ_WASS_D(MM));
    return rcpp_result_gen;
END_RCPP
}
// c_DISTA_M
List c_DISTA_M(List MM, S4 Protos);
RcppExport SEXP _HistDAWass_c_DISTA_M(SEXP MMSEXP, SEXP ProtosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type Protos(ProtosSEXP);
    rcpp_result_gen = Rcpp::wrap(c_DISTA_M(MM, Protos));
    return rcpp_result_gen;
END_RCPP
}
// c_DISTA_M2
NumericMatrix c_DISTA_M2(List MM, S4 Protos);
RcppExport SEXP _HistDAWass_c_DISTA_M2(SEXP MMSEXP, SEXP ProtosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type Protos(ProtosSEXP);
    rcpp_result_gen = Rcpp::wrap(c_DISTA_M2(MM, Protos));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFASTSSQ
List c_ComputeFASTSSQ(NumericMatrix subMM);
RcppExport SEXP _HistDAWass_c_ComputeFASTSSQ(SEXP subMMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type subMM(subMMSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFASTSSQ(subMM));
    return rcpp_result_gen;
END_RCPP
}
// c_Compute_M_from_MM
List c_Compute_M_from_MM(NumericMatrix subMM);
RcppExport SEXP _HistDAWass_c_Compute_M_from_MM(SEXP subMMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type subMM(subMMSEXP);
    rcpp_result_gen = Rcpp::wrap(c_Compute_M_from_MM(subMM));
    return rcpp_result_gen;
END_RCPP
}
// c_Fast_D_Mat
NumericMatrix c_Fast_D_Mat(List MM);
RcppExport SEXP _HistDAWass_c_Fast_D_Mat(SEXP MMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    rcpp_result_gen = Rcpp::wrap(c_Fast_D_Mat(MM));
    return rcpp_result_gen;
END_RCPP
}
// c_Prepare
List c_Prepare(S4 x, bool simplify, int qua, bool standardize);
RcppExport SEXP _HistDAWass_c_Prepare(SEXP xSEXP, SEXP simplifySEXP, SEXP quaSEXP, SEXP standardizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type simplify(simplifySEXP);
    Rcpp::traits::input_parameter< int >::type qua(quaSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    rcpp_result_gen = Rcpp::wrap(c_Prepare(x, simplify, qua, standardize));
    return rcpp_result_gen;
END_RCPP
}
// c_Prepare2
List c_Prepare2(S4 x, bool simplify, int qua, bool standardize);
RcppExport SEXP _HistDAWass_c_Prepare2(SEXP xSEXP, SEXP simplifySEXP, SEXP quaSEXP, SEXP standardizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type simplify(simplifySEXP);
    Rcpp::traits::input_parameter< int >::type qua(quaSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    rcpp_result_gen = Rcpp::wrap(c_Prepare2(x, simplify, qua, standardize));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFastSSQ
List c_ComputeFastSSQ(NumericMatrix subMM);
RcppExport SEXP _HistDAWass_c_ComputeFastSSQ(SEXP subMMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type subMM(subMMSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFastSSQ(subMM));
    return rcpp_result_gen;
END_RCPP
}
// c_MOM_D
double c_MOM_D(S4 o);
RcppExport SEXP _HistDAWass_c_MOM_D(SEXP oSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type o(oSEXP);
    rcpp_result_gen = Rcpp::wrap(c_MOM_D(o));
    return rcpp_result_gen;
END_RCPP
}
// c_MOM_MAT
NumericMatrix c_MOM_MAT(S4 x);
RcppExport SEXP _HistDAWass_c_MOM_MAT(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_MOM_MAT(x));
    return rcpp_result_gen;
END_RCPP
}
// c_STEP_2_ADA_KMEANS
List c_STEP_2_ADA_KMEANS(List MM, S4 proto, int schema, NumericMatrix memb);
RcppExport SEXP _HistDAWass_c_STEP_2_ADA_KMEANS(SEXP MMSEXP, SEXP protoSEXP, SEXP schemaSEXP, SEXP membSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< int >::type schema(schemaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    rcpp_result_gen = Rcpp::wrap(c_STEP_2_ADA_KMEANS(MM, proto, schema, memb));
    return rcpp_result_gen;
END_RCPP
}
// Provec
double Provec(NumericVector x);
RcppExport SEXP _HistDAWass_Provec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Provec(x));
    return rcpp_result_gen;
END_RCPP
}
// c_cen_rad
List c_cen_rad(NumericVector x);
RcppExport SEXP _HistDAWass_c_cen_rad(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_cen_rad(x));
    return rcpp_result_gen;
END_RCPP
}
// c_STEP_2_2_WEIGHTS_ADA_KMEANS
NumericMatrix c_STEP_2_2_WEIGHTS_ADA_KMEANS(NumericMatrix D1, NumericMatrix D2, int PROSUM, int schema, double theta);
RcppExport SEXP _HistDAWass_c_STEP_2_2_WEIGHTS_ADA_KMEANS(SEXP D1SEXP, SEXP D2SEXP, SEXP PROSUMSEXP, SEXP schemaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type D1(D1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D2(D2SEXP);
    Rcpp::traits::input_parameter< int >::type PROSUM(PROSUMSEXP);
    Rcpp::traits::input_parameter< int >::type schema(schemaSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(c_STEP_2_2_WEIGHTS_ADA_KMEANS(D1, D2, PROSUM, schema, theta));
    return rcpp_result_gen;
END_RCPP
}
// c_STEP_3_AFFECT_ADA_KMEANS
List c_STEP_3_AFFECT_ADA_KMEANS(NumericMatrix lambdas, List dIpro_m, List dIpro_v, int ind, int k, int vars);
RcppExport SEXP _HistDAWass_c_STEP_3_AFFECT_ADA_KMEANS(SEXP lambdasSEXP, SEXP dIpro_mSEXP, SEXP dIpro_vSEXP, SEXP indSEXP, SEXP kSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< List >::type dIpro_m(dIpro_mSEXP);
    Rcpp::traits::input_parameter< List >::type dIpro_v(dIpro_vSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_STEP_3_AFFECT_ADA_KMEANS(lambdas, dIpro_m, dIpro_v, ind, k, vars));
    return rcpp_result_gen;
END_RCPP
}
// c_COMP_SEVERAL_MEANS
S4 c_COMP_SEVERAL_MEANS(S4 y, NumericMatrix w);
RcppExport SEXP _HistDAWass_c_COMP_SEVERAL_MEANS(SEXP ySEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_COMP_SEVERAL_MEANS(y, w));
    return rcpp_result_gen;
END_RCPP
}
// c_COMP_SEVERAL_MEANS_M_D
List c_COMP_SEVERAL_MEANS_M_D(S4 y, NumericMatrix wM, NumericMatrix wDis);
RcppExport SEXP _HistDAWass_c_COMP_SEVERAL_MEANS_M_D(SEXP ySEXP, SEXP wMSEXP, SEXP wDisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wM(wMSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wDis(wDisSEXP);
    rcpp_result_gen = Rcpp::wrap(c_COMP_SEVERAL_MEANS_M_D(y, wM, wDis));
    return rcpp_result_gen;
END_RCPP
}
// c_Wass_Q_dist_DET
List c_Wass_Q_dist_DET(S4 o1, S4 o2);
RcppExport SEXP _HistDAWass_c_Wass_Q_dist_DET(SEXP o1SEXP, SEXP o2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type o1(o1SEXP);
    Rcpp::traits::input_parameter< S4 >::type o2(o2SEXP);
    rcpp_result_gen = Rcpp::wrap(c_Wass_Q_dist_DET(o1, o2));
    return rcpp_result_gen;
END_RCPP
}
// c_WH_ADPT_KMEANS_TOTALSSQ
List c_WH_ADPT_KMEANS_TOTALSSQ(S4 x, NumericMatrix memb, double m, NumericMatrix lambdas, S4 proto);
RcppExport SEXP _HistDAWass_c_WH_ADPT_KMEANS_TOTALSSQ(SEXP xSEXP, SEXP membSEXP, SEXP mSEXP, SEXP lambdasSEXP, SEXP protoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< S4 >::type proto(protoSEXP);
    rcpp_result_gen = Rcpp::wrap(c_WH_ADPT_KMEANS_TOTALSSQ(x, memb, m, lambdas, proto));
    return rcpp_result_gen;
END_RCPP
}
// c_WH_ADPT_FCMEANS_SSQ
double c_WH_ADPT_FCMEANS_SSQ(S4 x, NumericMatrix memb, double m, NumericMatrix lambdas, S4 proto, double theta);
RcppExport SEXP _HistDAWass_c_WH_ADPT_FCMEANS_SSQ(SEXP xSEXP, SEXP membSEXP, SEXP mSEXP, SEXP lambdasSEXP, SEXP protoSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< S4 >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(c_WH_ADPT_FCMEANS_SSQ(x, memb, m, lambdas, proto, theta));
    return rcpp_result_gen;
END_RCPP
}
// c_ADA_F_WHEIGHT
NumericMatrix c_ADA_F_WHEIGHT(List distances, int k, int vars, int ind, int schema, int weight_sys, double theta, double m);
RcppExport SEXP _HistDAWass_c_ADA_F_WHEIGHT(SEXP distancesSEXP, SEXP kSEXP, SEXP varsSEXP, SEXP indSEXP, SEXP schemaSEXP, SEXP weight_sysSEXP, SEXP thetaSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< int >::type schema(schemaSEXP);
    Rcpp::traits::input_parameter< int >::type weight_sys(weight_sysSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ADA_F_WHEIGHT(distances, k, vars, ind, schema, weight_sys, theta, m));
    return rcpp_result_gen;
END_RCPP
}
// c_MEMB_comp
NumericMatrix c_MEMB_comp(int ind, int vars, int k, NumericMatrix lambdas, List diINDtoPROT_M, List diINDtoPROT_V, double m, double theta);
RcppExport SEXP _HistDAWass_c_MEMB_comp(SEXP indSEXP, SEXP varsSEXP, SEXP kSEXP, SEXP lambdasSEXP, SEXP diINDtoPROT_MSEXP, SEXP diINDtoPROT_VSEXP, SEXP mSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< List >::type diINDtoPROT_M(diINDtoPROT_MSEXP);
    Rcpp::traits::input_parameter< List >::type diINDtoPROT_V(diINDtoPROT_VSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(c_MEMB_comp(ind, vars, k, lambdas, diINDtoPROT_M, diINDtoPROT_V, m, theta));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFastSSQ_Fuzzy_1V
List c_ComputeFastSSQ_Fuzzy_1V(NumericMatrix M, NumericVector memb, double m);
RcppExport SEXP _HistDAWass_c_ComputeFastSSQ_Fuzzy_1V(SEXP MSEXP, SEXP membSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFastSSQ_Fuzzy_1V(M, memb, m));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFastSSQ_Fuzzy
List c_ComputeFastSSQ_Fuzzy(List MM, NumericMatrix memb, double m, SEXP nr, SEXP nc);
RcppExport SEXP _HistDAWass_c_ComputeFastSSQ_Fuzzy(SEXP MMSEXP, SEXP membSEXP, SEXP mSEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFastSSQ_Fuzzy(MM, memb, m, nr, nc));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFast_L2_SQ_WASS_DMAT
List c_ComputeFast_L2_SQ_WASS_DMAT(List MM, S4 prot);
RcppExport SEXP _HistDAWass_c_ComputeFast_L2_SQ_WASS_DMAT(SEXP MMSEXP, SEXP protSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type prot(protSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFast_L2_SQ_WASS_DMAT(MM, prot));
    return rcpp_result_gen;
END_RCPP
}
// c_DISTA_ADA
List c_DISTA_ADA(S4 x, List MM, S4 proto, int vars, int ind, int k, NumericMatrix memb, double m, int schema);
RcppExport SEXP _HistDAWass_c_DISTA_ADA(SEXP xSEXP, SEXP MMSEXP, SEXP protoSEXP, SEXP varsSEXP, SEXP indSEXP, SEXP kSEXP, SEXP membSEXP, SEXP mSEXP, SEXP schemaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type schema(schemaSEXP);
    rcpp_result_gen = Rcpp::wrap(c_DISTA_ADA(x, MM, proto, vars, ind, k, memb, m, schema));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFast_L2_SQ_WASS_DMAT_simple
NumericMatrix c_ComputeFast_L2_SQ_WASS_DMAT_simple(List MM, S4 prot);
RcppExport SEXP _HistDAWass_c_ComputeFast_L2_SQ_WASS_DMAT_simple(SEXP MMSEXP, SEXP protSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type prot(protSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFast_L2_SQ_WASS_DMAT_simple(MM, prot));
    return rcpp_result_gen;
END_RCPP
}
// c_ComputeFast_Fuzzy_TOT_SSQ
List c_ComputeFast_Fuzzy_TOT_SSQ(List MM, S4 prot, NumericMatrix memb, double m);
RcppExport SEXP _HistDAWass_c_ComputeFast_Fuzzy_TOT_SSQ(SEXP MMSEXP, SEXP protSEXP, SEXP membSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type prot(protSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ComputeFast_Fuzzy_TOT_SSQ(MM, prot, memb, m));
    return rcpp_result_gen;
END_RCPP
}
// c_WH_ADPT_FCMEANS_SSQ_FAST
double c_WH_ADPT_FCMEANS_SSQ_FAST(List MM, S4 x, NumericMatrix memb, double m, NumericMatrix lambdas, S4 proto, double theta);
RcppExport SEXP _HistDAWass_c_WH_ADPT_FCMEANS_SSQ_FAST(SEXP MMSEXP, SEXP xSEXP, SEXP membSEXP, SEXP mSEXP, SEXP lambdasSEXP, SEXP protoSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< S4 >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(c_WH_ADPT_FCMEANS_SSQ_FAST(MM, x, memb, m, lambdas, proto, theta));
    return rcpp_result_gen;
END_RCPP
}
// c_WH_ADPT_FCMEANS_SSQ_FAST_NEW
double c_WH_ADPT_FCMEANS_SSQ_FAST_NEW(List DM, List DV, NumericMatrix memb, double m, NumericMatrix lambdas, double theta);
RcppExport SEXP _HistDAWass_c_WH_ADPT_FCMEANS_SSQ_FAST_NEW(SEXP DMSEXP, SEXP DVSEXP, SEXP membSEXP, SEXP mSEXP, SEXP lambdasSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type DM(DMSEXP);
    Rcpp::traits::input_parameter< List >::type DV(DVSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type memb(membSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(c_WH_ADPT_FCMEANS_SSQ_FAST_NEW(DM, DV, memb, m, lambdas, theta));
    return rcpp_result_gen;
END_RCPP
}
// c_dotpW
double c_dotpW(S4 o1, S4 o2);
RcppExport SEXP _HistDAWass_c_dotpW(SEXP o1SEXP, SEXP o2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type o1(o1SEXP);
    Rcpp::traits::input_parameter< S4 >::type o2(o2SEXP);
    rcpp_result_gen = Rcpp::wrap(c_dotpW(o1, o2));
    return rcpp_result_gen;
END_RCPP
}
// c_PROTO_KOHONEN
S4 c_PROTO_KOHONEN(S4 proto, int k, int ind, List MM, int vars, NumericMatrix KT, NumericVector IDX);
RcppExport SEXP _HistDAWass_c_PROTO_KOHONEN(SEXP protoSEXP, SEXP kSEXP, SEXP indSEXP, SEXP MMSEXP, SEXP varsSEXP, SEXP KTSEXP, SEXP IDXSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type proto(protoSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< List >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type KT(KTSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type IDX(IDXSEXP);
    rcpp_result_gen = Rcpp::wrap(c_PROTO_KOHONEN(proto, k, ind, MM, vars, KT, IDX));
    return rcpp_result_gen;
END_RCPP
}
// c_Wass_Q_dist_2P
List c_Wass_Q_dist_2P(S4 o1, S4 o2);
RcppExport SEXP _HistDAWass_c_Wass_Q_dist_2P(SEXP o1SEXP, SEXP o2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type o1(o1SEXP);
    Rcpp::traits::input_parameter< S4 >::type o2(o2SEXP);
    rcpp_result_gen = Rcpp::wrap(c_Wass_Q_dist_2P(o1, o2));
    return rcpp_result_gen;
END_RCPP
}
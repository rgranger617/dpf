// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// resampleSubOptimal
arma::vec resampleSubOptimal(arma::vec w, int N);
RcppExport SEXP dpf_resampleSubOptimal(SEXP wSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(resampleSubOptimal(w, N));
    return rcpp_result_gen;
END_RCPP
}
// resampleOptimal
arma::colvec resampleOptimal(arma::colvec w, int N);
RcppExport SEXP dpf_resampleOptimal(SEXP wSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(resampleOptimal(w, N));
    return rcpp_result_gen;
END_RCPP
}
// HHcreate
arma::mat HHcreate(arma::mat Rt, arma::mat Qt, int r, int q);
RcppExport SEXP dpf_HHcreate(SEXP RtSEXP, SEXP QtSEXP, SEXP rSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Rt(RtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Qt(QtSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(HHcreate(Rt, Qt, r, q));
    return rcpp_result_gen;
END_RCPP
}
// dpf
List dpf(arma::uvec currentStates, arma::colvec w, int N, arma::mat transProbs, arma::mat a0, arma::mat P0, arma::mat dt, arma::mat ct, arma::mat Tt, arma::mat Zt, arma::mat HHt, arma::mat GGt, arma::vec yt);
RcppExport SEXP dpf_dpf(SEXP currentStatesSEXP, SEXP wSEXP, SEXP NSEXP, SEXP transProbsSEXP, SEXP a0SEXP, SEXP P0SEXP, SEXP dtSEXP, SEXP ctSEXP, SEXP TtSEXP, SEXP ZtSEXP, SEXP HHtSEXP, SEXP GGtSEXP, SEXP ytSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type currentStates(currentStatesSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type transProbs(transProbsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P0(P0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ct(ctSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tt(TtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Zt(ZtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type HHt(HHtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GGt(GGtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type yt(ytSEXP);
    rcpp_result_gen = Rcpp::wrap(dpf(currentStates, w, N, transProbs, a0, P0, dt, ct, Tt, Zt, HHt, GGt, yt));
    return rcpp_result_gen;
END_RCPP
}
// getloglike
double getloglike(List pmats, arma::uvec path, arma::mat y);
RcppExport SEXP dpf_getloglike(SEXP pmatsSEXP, SEXP pathSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pmats(pmatsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type path(pathSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(getloglike(pmats, path, y));
    return rcpp_result_gen;
END_RCPP
}
// yupengMats
List yupengMats(arma::vec lt, arma::vec temposwitch, double sig2eps, arma::vec mus, arma::vec sig2eta, arma::vec transprobs);
RcppExport SEXP dpf_yupengMats(SEXP ltSEXP, SEXP temposwitchSEXP, SEXP sig2epsSEXP, SEXP musSEXP, SEXP sig2etaSEXP, SEXP transprobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type lt(ltSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type temposwitch(temposwitchSEXP);
    Rcpp::traits::input_parameter< double >::type sig2eps(sig2epsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mus(musSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sig2eta(sig2etaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type transprobs(transprobsSEXP);
    rcpp_result_gen = Rcpp::wrap(yupengMats(lt, temposwitch, sig2eps, mus, sig2eta, transprobs));
    return rcpp_result_gen;
END_RCPP
}
// beamSearch
List beamSearch(arma::mat a0, arma::mat P0, arma::vec w0, arma::cube dt, arma::cube ct, arma::cube Tt, arma::cube Zt, arma::cube Rt, arma::cube Qt, arma::cube GGt, arma::mat yt, arma::mat transProbs, int N);
RcppExport SEXP dpf_beamSearch(SEXP a0SEXP, SEXP P0SEXP, SEXP w0SEXP, SEXP dtSEXP, SEXP ctSEXP, SEXP TtSEXP, SEXP ZtSEXP, SEXP RtSEXP, SEXP QtSEXP, SEXP GGtSEXP, SEXP ytSEXP, SEXP transProbsSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P0(P0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w0(w0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type ct(ctSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Tt(TtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Zt(ZtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Rt(RtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Qt(QtSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type GGt(GGtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type yt(ytSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type transProbs(transProbsSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(beamSearch(a0, P0, w0, dt, ct, Tt, Zt, Rt, Qt, GGt, yt, transProbs, N));
    return rcpp_result_gen;
END_RCPP
}

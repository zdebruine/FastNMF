// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rand_spmat
Eigen::SparseMatrix<double> rand_spmat(const uint32_t nrow, const uint32_t ncol, const uint32_t inv_density, const uint32_t seed);
RcppExport SEXP _FastNMF_rand_spmat(SEXP nrowSEXP, SEXP ncolSEXP, SEXP inv_densitySEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type inv_density(inv_densitySEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rand_spmat(nrow, ncol, inv_density, seed));
    return rcpp_result_gen;
END_RCPP
}
// rand_mat
Eigen::MatrixXd rand_mat(const uint32_t nrow, const uint32_t ncol, const uint32_t seed);
RcppExport SEXP _FastNMF_rand_mat(SEXP nrowSEXP, SEXP ncolSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rand_mat(nrow, ncol, seed));
    return rcpp_result_gen;
END_RCPP
}
// c_nmf
Rcpp::List c_nmf(const Eigen::SparseMatrix<double> A, const double tol, const uint16_t maxit, const bool verbose, const double L1, Eigen::MatrixXd w);
RcppExport SEXP _FastNMF_c_nmf(SEXP ASEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::SparseMatrix<double> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nmf(A, tol, maxit, verbose, L1, w));
    return rcpp_result_gen;
END_RCPP
}
// c_nmf_rand
size_t c_nmf_rand(const uint32_t seed, const uint32_t nrow, const uint32_t ncol, const uint32_t k, const uint16_t maxit);
RcppExport SEXP _FastNMF_c_nmf_rand(SEXP seedSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP kSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nmf_rand(seed, nrow, ncol, k, maxit));
    return rcpp_result_gen;
END_RCPP
}
// run_benchmarking
std::vector<size_t> run_benchmarking();
RcppExport SEXP _FastNMF_run_benchmarking() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(run_benchmarking());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FastNMF_rand_spmat", (DL_FUNC) &_FastNMF_rand_spmat, 4},
    {"_FastNMF_rand_mat", (DL_FUNC) &_FastNMF_rand_mat, 3},
    {"_FastNMF_c_nmf", (DL_FUNC) &_FastNMF_c_nmf, 6},
    {"_FastNMF_c_nmf_rand", (DL_FUNC) &_FastNMF_c_nmf_rand, 5},
    {"_FastNMF_run_benchmarking", (DL_FUNC) &_FastNMF_run_benchmarking, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_FastNMF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

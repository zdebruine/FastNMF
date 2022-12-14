# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

rand_spmat <- function(nrow, ncol, inv_density, seed) {
    .Call(`_FastNMF_rand_spmat`, nrow, ncol, inv_density, seed)
}

rand_mat <- function(nrow, ncol, seed) {
    .Call(`_FastNMF_rand_mat`, nrow, ncol, seed)
}

c_nmf <- function(A, tol, maxit, verbose, L1, w) {
    .Call(`_FastNMF_c_nmf`, A, tol, maxit, verbose, L1, w)
}

c_nmf_rand <- function(seed, nrow, ncol, k, maxit) {
    .Call(`_FastNMF_c_nmf_rand`, seed, nrow, ncol, k, maxit)
}

#' Automatic benchmarking using random matrices
#' 
#' @export
run_benchmarking <- function() {
    .Call(`_FastNMF_run_benchmarking`)
}


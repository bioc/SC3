// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// splits
std::vector<int> splits(const std::string myString);
RcppExport SEXP SC3_splits(SEXP myStringSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string >::type myString(myStringSEXP);
    __result = Rcpp::wrap(splits(myString));
    return __result;
END_RCPP
}
// ED1
arma::mat ED1(const arma::mat& x);
RcppExport SEXP SC3_ED1(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    __result = Rcpp::wrap(ED1(x));
    return __result;
END_RCPP
}
// ED2
NumericMatrix ED2(const NumericMatrix& x);
RcppExport SEXP SC3_ED2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    __result = Rcpp::wrap(ED2(x));
    return __result;
END_RCPP
}
// consmx
arma::mat consmx(const std::vector<std::string> myString, arma::mat res, int length);
RcppExport SEXP SC3_consmx(SEXP myStringSEXP, SEXP resSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type myString(myStringSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type res(resSEXP);
    Rcpp::traits::input_parameter< int >::type length(lengthSEXP);
    __result = Rcpp::wrap(consmx(myString, res, length));
    return __result;
END_RCPP
}
// mult
arma::mat mult(arma::mat D, arma::mat x, int dim);
RcppExport SEXP SC3_mult(SEXP DSEXP, SEXP xSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    __result = Rcpp::wrap(mult(D, x, dim));
    return __result;
END_RCPP
}
// tmult
arma::mat tmult(arma::mat x);
RcppExport SEXP SC3_tmult(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    __result = Rcpp::wrap(tmult(x));
    return __result;
END_RCPP
}
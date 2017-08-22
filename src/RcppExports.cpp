// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// h5createDataset1
void h5createDataset1(std::string h5file, std::string ds_name, std::vector<int> dims, std::string storage_mode, std::vector<int> chunk_dims, int compressor, int nLevel);
RcppExport SEXP singleCell_h5createDataset1(SEXP h5fileSEXP, SEXP ds_nameSEXP, SEXP dimsSEXP, SEXP storage_modeSEXP, SEXP chunk_dimsSEXP, SEXP compressorSEXP, SEXP nLevelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type h5file(h5fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type ds_name(ds_nameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< std::string >::type storage_mode(storage_modeSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type chunk_dims(chunk_dimsSEXP);
    Rcpp::traits::input_parameter< int >::type compressor(compressorSEXP);
    Rcpp::traits::input_parameter< int >::type nLevel(nLevelSEXP);
    h5createDataset1(h5file, ds_name, dims, storage_mode, chunk_dims, compressor, nLevel);
    return R_NilValue;
END_RCPP
}
// h5write1
bool h5write1(Rcpp::NumericMatrix data, std::string filename, std::string ds_name, std::vector<int> colIndx);
RcppExport SEXP singleCell_h5write1(SEXP dataSEXP, SEXP filenameSEXP, SEXP ds_nameSEXP, SEXP colIndxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type ds_name(ds_nameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type colIndx(colIndxSEXP);
    rcpp_result_gen = Rcpp::wrap(h5write1(data, filename, ds_name, colIndx));
    return rcpp_result_gen;
END_RCPP
}
// h5read1
NumericVector h5read1(std::string filename, std::string ds_name, std::vector<int> colIndx);
RcppExport SEXP singleCell_h5read1(SEXP filenameSEXP, SEXP ds_nameSEXP, SEXP colIndxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type ds_name(ds_nameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type colIndx(colIndxSEXP);
    rcpp_result_gen = Rcpp::wrap(h5read1(filename, ds_name, colIndx));
    return rcpp_result_gen;
END_RCPP
}
// h5read2
void h5read2(std::string filename, std::string ds_name, std::vector<int> src_colIndx, NumericMatrix mat, std::vector<int> dest_colIndx);
RcppExport SEXP singleCell_h5read2(SEXP filenameSEXP, SEXP ds_nameSEXP, SEXP src_colIndxSEXP, SEXP matSEXP, SEXP dest_colIndxSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type ds_name(ds_nameSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type src_colIndx(src_colIndxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dest_colIndx(dest_colIndxSEXP);
    h5read2(filename, ds_name, src_colIndx, mat, dest_colIndx);
    return R_NilValue;
END_RCPP
}
// lmdb_open
List lmdb_open(std::string dbfile);
RcppExport SEXP singleCell_lmdb_open(SEXP dbfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type dbfile(dbfileSEXP);
    rcpp_result_gen = Rcpp::wrap(lmdb_open(dbfile));
    return rcpp_result_gen;
END_RCPP
}
// lmdb_close
void lmdb_close(List db);
RcppExport SEXP singleCell_lmdb_close(SEXP dbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type db(dbSEXP);
    lmdb_close(db);
    return R_NilValue;
END_RCPP
}
// mdb_insert_cols
void mdb_insert_cols(List db, IntegerVector cidx, Rcpp::List vecs);
RcppExport SEXP singleCell_mdb_insert_cols(SEXP dbSEXP, SEXP cidxSEXP, SEXP vecsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type db(dbSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cidx(cidxSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type vecs(vecsSEXP);
    mdb_insert_cols(db, cidx, vecs);
    return R_NilValue;
END_RCPP
}
// mdb_get_cols
List mdb_get_cols(List db, IntegerVector cidx);
RcppExport SEXP singleCell_mdb_get_cols(SEXP dbSEXP, SEXP cidxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type db(dbSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cidx(cidxSEXP);
    rcpp_result_gen = Rcpp::wrap(mdb_get_cols(db, cidx));
    return rcpp_result_gen;
END_RCPP
}
// lzcompress
Rcpp::RawVector lzcompress(RawVector vec, int acceleration, bool verbose);
RcppExport SEXP singleCell_lzcompress(SEXP vecSEXP, SEXP accelerationSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type acceleration(accelerationSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(lzcompress(vec, acceleration, verbose));
    return rcpp_result_gen;
END_RCPP
}
// lzdecompress
RawVector lzdecompress(RawVector input, bool verbose);
RcppExport SEXP singleCell_lzdecompress(SEXP inputSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(lzdecompress(input, verbose));
    return rcpp_result_gen;
END_RCPP
}

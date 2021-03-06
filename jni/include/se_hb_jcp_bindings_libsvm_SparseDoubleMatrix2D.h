/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D */

#ifndef _Included_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
#define _Included_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
#ifdef __cplusplus
extern "C" {
#endif
#undef se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_serialVersionUID
#define se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_serialVersionUID 1020LL
/*
 * Class:     se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
 * Method:    native_matrix_create
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_native_1matrix_1create
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
 * Method:    native_matrix_free
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_native_1matrix_1free
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
 * Method:    native_matrix_get
 * Signature: (JII)D
 */
JNIEXPORT jdouble JNICALL Java_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_native_1matrix_1get
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
 * Method:    native_matrix_set
 * Signature: (JIID)V
 */
JNIEXPORT void JNICALL Java_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_native_1matrix_1set
  (JNIEnv *, jclass, jlong, jint, jint, jdouble);

/*
 * Class:     se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
 * Method:    native_matrix_get_row
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_native_1matrix_1get_1row
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D
 * Method:    native_matrix_set_row
 * Signature: (JI[I[D)J
 */
JNIEXPORT jlong JNICALL Java_se_hb_jcp_bindings_libsvm_SparseDoubleMatrix2D_native_1matrix_1set_1row
  (JNIEnv *, jclass, jlong, jint, jintArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif

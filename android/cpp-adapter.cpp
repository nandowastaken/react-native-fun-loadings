#include <jni.h>
#include "react-native-fun-loadings.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_funloadings_FunLoadingsModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return funloadings::multiply(a, b);
}

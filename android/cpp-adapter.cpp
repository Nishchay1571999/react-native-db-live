#include <jni.h>
#include "react-native-db-live.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_dblive_DbLiveModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return dblive::multiply(a, b);
}

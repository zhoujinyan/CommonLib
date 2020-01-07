//
// Created by Administrator on 2020\1\7 0007.
//

#include "CalculateTools.h"

extern "C"{
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intAdd(JNIEnv *env, jobject jobj, jint number1, jint number2) {
    return calculate->intAdd(number1, number2);
}
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intSubtraction(JNIEnv * env, jobject thiz, jint number1, jint number2){
    return calculate->intAdd(number1, number2);
}
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intMultiply(JNIEnv * env, jobject thiz, jint number1, jint number2){
    return calculate->intAdd(number1, number2);
}
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intDivision(JNIEnv * env, jobject thiz, jint number1, jint number2) {
    return calculate->intAdd(number1, number2);
}
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexAdd(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexSubtraction(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexMultiply(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexDivision(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortAdd(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortSubtraction(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortMultiply(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortDivision(JNIEnv * env, jobject thiz, jshort , jshort);
}



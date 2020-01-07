//
// Created by Administrator on 2020\1\7 0007.
//

#ifndef COMMONLIB_CALCULATETOOLS_H
#define COMMONLIB_CALCULATETOOLS_H
#include <jni.h>
#include "Calculate.h"
#include <iomanip>
#include <iostream>
using namespace Tools;

#ifdef __cplusplus
extern "C" {
#endif
Calculate *calculate = new Calculate();
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intAdd(JNIEnv * env, jobject thiz, jint , jint);
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intSubtraction(JNIEnv * env, jobject thiz, jint , jint);
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intMultiply(JNIEnv * env, jobject thiz, jint , jint);
JNIEXPORT int JNICALL Java_com_android_commonlib_CalculateTools_intDivision(JNIEnv * env, jobject thiz, jint , jint);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexAdd(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexSubtraction(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexMultiply(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT jstring Java_com_android_commonlib_CalculateTools_hexDivision(JNIEnv * env, jobject thiz, jstring , jstring);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortAdd(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortSubtraction(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortMultiply(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_shortDivision(JNIEnv * env, jobject thiz, jshort , jshort);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_hex_dec(JNIEnv * env, jobject thiz, jint);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_dec_hex(JNIEnv * env, jobject thiz, jint);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_bin_to_dec(JNIEnv * env, jobject thiz, jint);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_dec_to_bin(JNIEnv * env, jobject thiz, jint);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_bin_to_hex(JNIEnv * env, jobject thiz, jint);
JNIEXPORT short JNICALL Java_com_android_commonlib_CalculateTools_hex_to_bin(JNIEnv * env, jobject thiz, jint);
#ifdef __cplusplus
}
#endif
#endif //COMMONLIB_CALCULATETOOLS_H

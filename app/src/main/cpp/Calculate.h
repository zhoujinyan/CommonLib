//
// Created by Administrator on 2020\1\7 0007.
//

#ifndef COMMONLIB_CALCULATE_H
#define COMMONLIB_CALCULATE_H

#include <string>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <android/log.h>
#include "NumberConvert.h"
#define TAG "CalculateTools"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__) // 定义LOGD类型
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO,TAG,__VA_ARGS__) // 定义LOGD类型
#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN,TAG,__VA_ARGS__) // 定义LOGD类型
using namespace std;
namespace Tools {
    class Calculate {
    public:
        Calculate();
        virtual ~Calculate();
        int intAdd(int32_t number1, int32_t number2);
        int intSubtraction(int32_t number1, int32_t number2);
        int intMultiply(int32_t number1, int32_t number2);
        int intDivision(int32_t number1, int32_t number2);
        string hexAdd(string number1, string number2);
        string hexSubtraction(string number1, string number2);
        string hexMultiply(string number1, string number2);
        string hexDivision(string number1, string number2);
        short shortAdd(short number1, short number2);
        short shortSubtraction(short number1, short number2);
        short shortMultiply(short number1, short number2);
        short shortDivision(short number1, short number2);

    private:
        Calculate *mCalculate;
    };
}
#endif //COMMONLIB_CALCULATE_H

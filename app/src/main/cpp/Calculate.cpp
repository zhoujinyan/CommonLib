//
// Created by Administrator on 2020\1\7 0007.
//

#include "Calculate.h"
namespace Tools {
    Calculate::Calculate() {

    }
    Calculate::~Calculate() {
    }
    int Calculate::intAdd(int32_t number1, int32_t number2) {
        return number1 + number2;
    }
    int Calculate::intSubtraction(int32_t number1, int32_t number2) {
        return number1 - number2;
    }
    int Calculate::intMultiply(int32_t number1, int32_t number2) {
        return number1 * number2;
    }
    int Calculate::intDivision(int32_t number1, int32_t number2) {
        if(number2 != 0) {
            return number1 / number2;
        } else{
            LOGD("number2 cannot equal 0!");
            return -1;
        }
    }



}

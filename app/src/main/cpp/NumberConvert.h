//
// Created by Administrator on 2020\1\7 0007.
//

#ifndef COMMONLIB_NUMBERCONVERT_H
#define COMMONLIB_NUMBERCONVERT_H

#include<string>
using namespace std;
class NumberConvert
{
public:
    static string decToBin(double dec, int len=5);
    static string decToOct(double dec, int len=5);
    static string decToHex(double dec, int len=5);
    static string binToDec(string bin);
    static string octToDec(string oct);
    static string hexToDec(string hex);
    static string binToOct(string bin);
    static string binToHex(string bin);
    static string octToBin(string oct);
    static string hexToBin(string hex);
private:
    static string decToR(double dec, int r, int len=5);
    static string rToDec(string sr, int r);
    static string binToR(string bin, int r);
    static string rToBin(string sr, int r);
};


#endif //COMMONLIB_NUMBERCONVERT_H

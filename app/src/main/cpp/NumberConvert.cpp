//
// Created by Administrator on 2020\1\7 0007.
//
#include<iostream>
#include <sstream>
#include<string>
#include<cmath>
#include "NumberConvert.h"

using namespace std;
string NumberConvert::decToBin(double dec, int len)
{
    return NumberConvert::decToR(dec, 2, len);
}

string NumberConvert::decToOct(double dec, int len)
{
    return NumberConvert::decToR(dec, 8, len);
}

string NumberConvert::decToHex(double dec, int len)
{
    return NumberConvert::decToR(dec, 16, len);
}

string NumberConvert::decToR(double dec, int r, int len/* =5 */)
{
    string sr;
    int ival = (int)dec;
    double d = dec - (double)ival;
    //整数部分
    while (ival != 0)
    {
        stringstream ss;
        ss<<ival %r;
        string s = ss.str();
        if (r==16 && (ival%r >= 10))
        {
            int alu = ival % r;
            switch(alu)
            {
                case 10: s="A"; break;
                case 11: s="B"; break;
                case 12: s="C"; break;
                case 13: s="D"; break;
                case 14: s="E"; break;
                case 15: s="F"; break;
            }
        }
        sr = s+sr;
        ival = ival/r;
    }

    if(d == 0.0)
        return sr;

    //小数部分
    int n = 0;
    string s=".";
    while (n < len)
    {
        if (d*r >= 1)
        {
            stringstream ss;
            ss<<(int)(d*r);
            string s1 = ss.str();
            if (r==16 && (int)(d*r) >= 10)
            {
                int alu = (int)(d*r);
                switch(alu)
                {
                    case 10: s1="A"; break;
                    case 11: s1="B"; break;
                    case 12: s1="C"; break;
                    case 13: s1="D"; break;
                    case 14: s1="E"; break;
                    case 15: s1="F"; break;
                }
            }
            s+=s1;
            n++;
            d=d*r-(int)(d*r);
        }
        else
        {
            s+="0";
            n++;
            d = d*r;
        }

        if (d-(int)d == 0)
            break;
    }
    return sr+s;
}

std::string NumberConvert::binToDec(string bin)
{
    return NumberConvert::rToDec(bin, 2);
}

std::string NumberConvert::octToDec(string oct)
{
    return NumberConvert::rToDec(oct, 8);
}

std::string NumberConvert::hexToDec(string hex)
{
    return NumberConvert::rToDec(hex, 16);
}

// 将R进制转换为十进制：把各非十进制数按权展开，然后求和
std::string NumberConvert::rToDec(string sr, int r)
{
    string sint, sdec;
    size_t index = sr.find_first_of(".");
    if (index != string::npos)
    {
        sint = sr.substr(0, index);
        sdec = sr.substr(index+1);
    }else{
        sint = sr;
    }

    double sum = 0;
    int len = sint.length();
    for (int i=len-1;i>=0;--i)
    {
        string ch;
        if (r==16 && sint[i] >=10)
        {
            switch(sint[i])
            {
                case 'A':
                case 'a':
                    ch="10"; break;
                case 'B':
                case 'b':
                    ch="11"; break;
                case 'C':
                case 'c':
                    ch="12"; break;
                case 'D':
                case 'd':
                    ch="13"; break;
                case 'E':
                case 'e':
                    ch="14"; break;
                case 'F':
                case 'f':
                    ch="15"; break;
            }
        }
        string s1(1, sint[i]);
        s1 = ch.empty()? s1:ch;
        int n = atoi(s1.c_str());
        sum +=n*pow((double)r, len-1-i);
    }

    if (sdec != "")
    {
        int slen = sdec.length();
        for (int i=0;i<slen;++i)
        {
            string s1(1, sdec[i]);
            int n = atoi(s1.c_str());
            sum+=n*1/(pow((double)r, (i+1)));
        }
    }
    stringstream ss;
    ss<<sum;
    return ss.str();
}
std::string NumberConvert::binToOct(string bin)
{
    return binToR(bin, 8);
}
std::string NumberConvert::binToHex(string bin)
{
    return binToR(bin, 16);
}
std::string NumberConvert::octToBin(string oct)
{
    return rToBin(oct, 8);
}
std::string NumberConvert::hexToBin(string hex)
{
    return rToBin(hex, 16);
}
std::string NumberConvert::binToR(string bin, int r)
{
    int len = bin.length();
    string sint, sdec;
    size_t index = bin.find_first_of(".");
    if (index != string::npos)
    {
        sint = bin.substr(0, index);
        sdec = bin.substr(index+1);
    }else{
        sint = bin;
    }

    string rval;
    if (r==8)
    {
        //整数部分
        int dex = sint.length()-1;
        while(dex-2>=0)
        {
            string s = sint.substr(dex-2, 3);
            rval = NumberConvert::binToDec(s) + rval;
            dex = dex -3;
        }
        string s = sint.substr(0, dex+1);
        rval = NumberConvert::binToDec(s) + rval;

        //小数部分
        if (!sdec.empty())
        {
            rval += ".";
            int dex = sdec.length();
            int pos=0;
            while (dex>3)
            {
                string s = sdec.substr(pos, 3);
                rval += NumberConvert::binToDec(s);
                pos += 3;
                dex = dex - 3;
            }
            string s = sdec.substr(pos);
            while(s.length()<3){
                s += '0';
            }
            rval += NumberConvert::binToDec(s);
        }
    }
    if (r==16)
    {
        //整数部分
        int dex = sint.length()-1;
        while(dex-3>=0)
        {
            string s = sint.substr(dex-3, 4);
            string temp = NumberConvert::binToDec(s);
            rval = NumberConvert::decToHex(stoi(temp)) + rval;
            dex = dex -4;
        }
        string s = sint.substr(0, dex+1);
        rval = NumberConvert::decToHex(stoi(NumberConvert::binToDec(s))) + rval;

        //小数部分
        if (!sdec.empty())
        {
            rval += ".";
            int dex = sdec.length();
            int pos=0;
            while (dex>4)
            {
                string s = sdec.substr(pos, 4);
                rval += NumberConvert::binToDec(s);
                pos += 4;
                dex = dex - 4;
            }
            string s = sdec.substr(pos);
            while(s.length()<4){
                s += '0';
            }
            rval += NumberConvert::binToDec(s);
        }
    }
    return rval;
}
string NumberConvert::rToBin(string sr, int r)
{
    int len = sr.length();
    string sint, sdec;
    size_t index = sr.find_first_of(".");
    if (index != string::npos)
    {
        sint = sr.substr(0, index);
        sdec = sr.substr(index+1);
    }else{
        sint = sr;
    }
    string rval;
    if (8==r)
    {
        int len =sint.length();
        for (int i=0;i<len;++i)
        {
            string s(1, sint[i]);
            string ddec = octToDec(s);
            rval += decToBin(stoi(ddec));
        }
        rval += ".";
        len = sdec.length();
        for (int i=0;i<len;++i)
        {
            string s(1, sdec[i]);
            rval += decToBin(stoi(octToDec(s)));
        }
    }
    if (16==r)
    {
        int len =sint.length();
        for (int i=0;i<len;++i)
        {
            string s(1, sint[i]);
            string ddec = hexToDec(s);
            rval += decToBin(stoi(ddec));
        }
        rval += ".";
        len = sdec.length();
        for (int i=0;i<len;++i)
        {
            string s(1, sdec[i]);
            rval += decToBin(stoi(hexToDec(s)));
        }
    }
    return rval;
}


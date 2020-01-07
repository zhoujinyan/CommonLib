package com.android.commonlib;

public class CalculateTools {
    static {
        System.loadLibrary("native-lib");
    }
    public native int intAdd(int a, int b);
    public native int intSubtraction(int a, int b);
    public native int intMultiply(int a, int b);
    public native int intDivision(int a, int b);
}

package com.lily.cmake.jni;

public class NativeFun {

    static {
        System.loadLibrary("native_lib");
    }

    public static native String stringFromJNI();
}

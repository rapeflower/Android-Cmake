//
// Created by lilei on 2018/10/16.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL Java_com_lily_cmake_jni_NativeFun_stringFromJNI(JNIEnv *env, jclass cls) {
     return env->NewStringUTF("Android CMake study C++");
}
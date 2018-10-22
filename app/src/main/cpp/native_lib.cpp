//
// Created by lilei on 2018/10/16.
//
#include <jni.h>
#include <string>
#define COMMON_FUN(name)Java_com_lily_cmake_jni_##name

extern "C" JNIEXPORT jstring JNICALL COMMON_FUN(NativeFun_stringFromJNI)(JNIEnv *env, jclass cls) {
     return env->NewStringUTF("Android CMake study C++");
}
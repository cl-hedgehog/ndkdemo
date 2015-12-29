//
// Created by BMR on 2015/12/28.
//

#include "com_dreamzone_ndkdemo_ndkutils_NdkJniUtils.h"
/*
 * Class:     com_dreamzone_mtime_ndkdemo_NdkJniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_dreamzone_ndkdemo_ndkutils_NdkJniUtils_getCLanguageString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"This just a demo for Android Studio NDK JNI developer!");
}

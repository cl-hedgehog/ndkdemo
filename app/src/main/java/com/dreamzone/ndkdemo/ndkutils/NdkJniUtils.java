package com.dreamzone.ndkdemo.ndkutils;

/**
 * @author BMR
 * @ClassName: NdkJniUtils
 * @Description: TODO:
 * @date 2015/12/28 16:39
 */
public class NdkJniUtils {
    public native String getCLanguageString();
    // jni的函数定义好之后，要load,参数名称就是app的build.gradle中定义的moduleName = "ndkdemo"
    static{
        System.loadLibrary("ndkdemo");
    }
}

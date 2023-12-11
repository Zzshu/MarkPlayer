//
// Created by 67076 on 2023/12/11.
//

#ifndef MARKPLAYER_JNICALLBAKCHELPER_H
#define MARKPLAYER_JNICALLBAKCHELPER_H


#include <jni.h>

class JNICallbakcHelper {
private:
    JavaVM *vm;
    JNIEnv *pEnv;
    jobject *pJobject;

public:
    JNICallbakcHelper(JavaVM *pVm, JNIEnv *pEnv, jobject Jobject);


    virtual ~JNICallbakcHelper();
};


#endif //MARKPLAYER_JNICALLBAKCHELPER_H

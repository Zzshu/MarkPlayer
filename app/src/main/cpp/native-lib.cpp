#include <jni.h>
#include <string>

// 日志输出
#include <android/log.h>
#include "JNICallbakcHelper.h"
#include "MarkPlayer.h"

#define TAG "Mark"

// __VA_ARGS__ 代表 ...的可变参数
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG,  __VA_ARGS__);
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG,  __VA_ARGS__);
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG,  __VA_ARGS__);

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_markplayer_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    LOGD("jni链接成功")

    return env->NewStringUTF(hello.c_str());
}

JavaVM *vm = 0;

jint JNI_OnLoad(JavaVM *vm, void *args) {
    ::vm = vm;

    return JNI_VERSION_1_6;
}


extern "C"
JNIEXPORT void JNICALL
Java_com_example_markplayer_MarkPlayer_prepareNative(JNIEnv *env, jobject job,
                                                     jstring data_source) {
    const char * data_source_ = env->GetStringUTFChars(data_source, nullptr);
    JNICallbakcHelper *pHelper = new JNICallbakcHelper(vm, env, job);
    MarkPlayer *player = new MarkPlayer(data_source_, pHelper);

    LOGD("Java_com_example_markplayer_MarkPlayer_prepareNative");


}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_markplayer_MarkPlayer_startNative(JNIEnv *env, jobject thiz) {
    // TODO: implement startNative()
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_markplayer_MarkPlayer_stopNative(JNIEnv *env, jobject thiz) {
    // TODO: implement stopNative()
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_markplayer_MarkPlayer_releaseNative(JNIEnv *env, jobject thiz) {
    // TODO: implement releaseNative()
}
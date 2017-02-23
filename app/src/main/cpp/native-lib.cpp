#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_mihir_1root_orangeglove323_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

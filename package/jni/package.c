#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <android/log.h>
#include <binder.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/mman.h>

#define LOG_TAG "DEBUG"
#define LOGD(fmt, args...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, fmt, ##args)

int main_entry(char * a) {
    LOGD("hook entry");
    return 0;
}

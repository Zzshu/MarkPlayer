//
// Created by 67076 on 2023/12/11.
//

#ifndef MARKPLAYER_MARKPLAYER_H
#define MARKPLAYER_MARKPLAYER_H


#include "JNICallbakcHelper.h"

#include <cstring>
#include <pthread.h>
#include "JNICallbakcHelper.h"

extern "C" { // ffmpeg是纯c写的，必须采用c的编译方式，否则奔溃

#include <libavformat/avformat.h>

};

class MarkPlayer {
private:
    const char *data_source;
    JNICallbakcHelper *pHelper;
public:

    MarkPlayer(const char *string, JNICallbakcHelper *pHelper);
};


#endif //MARKPLAYER_MARKPLAYER_H

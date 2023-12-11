//
// Created by 67076 on 2023/12/11.
//

#include "MarkPlayer.h"


MarkPlayer::MarkPlayer(const char *data_source, JNICallbakcHelper *pHelper) {
/**
 * 这里传进来的data_source是栈里面的值,会被回收,所以需要深拷贝
 * strlen不计算\0的长度,所以要+1
 */
    this->data_source = new char[strlen(data_source) + 1];
    strcpy(this->data_source, data_source); // 把源 Copy给成员

    this->pHelper = pHelper;


}

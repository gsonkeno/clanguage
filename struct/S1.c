//
// Created by ruchen on 2021/9/24.
//
# include "stdio.h"
struct const_info{
    // 占4字节
    unsigned post;
    // 占4字节
    unsigned int a;
    // 占4字节
    int b;
};

int main(){
    struct const_info a = {1,2, 3};
    printf("%lu\n", sizeof(a));
    return 0;
}


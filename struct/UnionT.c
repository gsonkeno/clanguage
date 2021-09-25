//
// Created by ruchen on 2021/9/25.
//
# include "stdio.h"
unsigned float2Unsign(float a){
    union{
        // 都是4字节，共享存储空间
        float  b;
        unsigned c;
    }temp_union;

    temp_union.b = a;
    return temp_union.c;
}

int main(){
    float a = 10.0f;
    unsigned b = float2Unsign(a);

    printf("%u\n", b);
    return 0;
}


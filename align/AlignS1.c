//
// Created by ruchen on 2021/9/25.
//
# include "stdio.h"

// 表示 struct内分量的自然边界比4字节大时，就按4字节对齐，否则按照自然边界对齐
# pragma pack(4)
typedef struct {
    u_int32_t f1;
    u_int8_t f2;
    u_int8_t f3;
    u_int32_t f4;
    u_int64_t f5;
}__attribute__((aligned(1024))) ts;
// 表示结构体按1024对齐，那么首地址是1024字节整数倍，结构体内部分量也

int main(){
    printf("Struct size is: %d, aligned on 1024\n",sizeof(ts));
    printf("Allocate f1 on address: 0x%x\n",&(((ts*)0)->f1)); // (ts*)0 的表示方法不是很清楚
    printf("Allocate f2 on address: 0x%x\n",&(((ts*)0)->f2));
    printf("Allocate f3 on address: 0x%x\n",&(((ts*)0)->f3));
    printf("Allocate f4 on address: 0x%x\n",&(((ts*)0)->f4));
    printf("Allocate f5 on address: 0x%x\n",&(((ts*)0)->f5));
    return 0;
}

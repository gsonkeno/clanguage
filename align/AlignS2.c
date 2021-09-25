//
// Created by ruchen on 2021/9/25.
//

# include "stdio.h"
#pragma pack(2)  // 自然边界比2大就按2对齐，否则按自然边界对齐
struct test1{
    char x2;  // 需要1字节，
    int x1;   // 需要4字节
    short x3; // 需要2字节
    long long x4; // 需要8字节
}__attribute__((packed)); //紧凑， 共需要15字节

struct test2{
    char x2;  // 需要2字节，其中1字节浪费
    int x1;   // 需要4字节
    short x3; // 需要2字节
    long long x4; // 需要8字节
};  // 共需要16字节

struct test3{
    char x2;  // 需要2字节，其中1字节浪费
    int x1;   // 需要4字节
    short x3; // 需要2字节
    long long x4; // 需要8字节
}__attribute__((aligned(8)));  // 首字节必须是8倍数，占用空间也要是8倍数


int main(){
    printf("size=%d\n", sizeof(struct test1));
    printf("size=%d\n", sizeof(struct test2));
    printf("size=%d\n", sizeof(struct test3));
    return 0;
}


//
// Created by ruchen on 2021/9/20.
//

# include "stdio.h"

int main(){
    unsigned  int a = 1;
    unsigned short b = 1;
    char c = -1;
    int d;

    // 按照无符号, 结果为0
    d = (a > c)? 1: 0;
    printf("%d\n", d);

    // 按照有符号比, 结果为1
    d = (b > c)? 1: 0;
    printf("%d\n", d);

    return 0;
}

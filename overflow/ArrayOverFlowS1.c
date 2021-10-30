//
// Created by ruchen on 2021/9/25.
//

// 数组缓冲区溢出

# include "stdio.h"
double fun(int i){
    volatile double d[1]= {3.14};
    volatile long int a[2];
    a[i] = 1073741824;
    return d[0];
}

int main(){
    printf("%f\n", fun(0));
    printf("%f\n", fun(1));
    printf("%f\n", fun(2)); // 数据不准确
    printf("%f\n", fun(3)); // Abort trap
    printf("%f\n", fun(4));
    return 0;
}


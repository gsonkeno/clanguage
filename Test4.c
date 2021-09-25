//
// Created by ruchen on 2021/9/20.
//

#include "stdio.h"

int main(){
    int a = 10;

    double *p = (double*)&a;
    printf("%f\n", *p);
    return 0;
}

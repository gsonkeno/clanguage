//
// Created by ruchen on 2021/9/20.
//
#include "stdio.h"

int sum(int a[] , unsigned len){
    int i, sum = 0;
    for(i =0; i < len - 1; i++){
        sum = sum + a[i];
    }
    return sum;
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int result = sum(a, 0);
    printf("%d", result);
    return 0;
}

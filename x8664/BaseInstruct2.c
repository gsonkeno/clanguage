//
// Created by ruchen on 2021/10/24.
//

// gcc  -S BaseInstruct2.c

# include "stdio.h"

// https://blog.csdn.net/weixin_42889479/article/details/81437659
// *a :在定义变量时表示的是一个指针类型的变量，而在代码中（执行部分）则表示取出该指针所指向内容的值。
void test(char a, char *ap, short b, short *bp, int c, int *cp, long d, long *dp){
    *ap +=a;
    *bp +=b;
    *cp +=c;
    *dp +=d;
}

long caller(){
    char a = 1;
    short b = 2;
    int c = 3;
    long d = 4;

    test(a, &a, b, &b, c, &c, d, &d);

    // a,b, c, d 都扩大1倍，相当于 2*4 + 6*8 = 8 + 48 = 56
    return a*b + c*d;
}



int main(){
    long m = caller();
    printf("%ld\n", m);
}

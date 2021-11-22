//
// Created by ruchen on 2021/11/20.
//
# include "stdio.h"

// myproc1.c 与myproc2.c 两个文件编译生成可重定位目标文件(.o),
// 然后打包生成myblib.a 静态库
// gcc -c myproc1.c myproc2.c
// ar rcs mylib.a mypro1.o mypro2.o
void myfun1(){
    printf("this is myfunc1!\n");
}


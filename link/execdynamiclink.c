//
// Created by ruchen on 2021/11/26.
//

// 运行时 动态链接
#include "stdio.h"
#include "dlfcn.h"

int main(){
    void *handle;
    void (*myfun1)();
    char *error;

    // 动态装入包含函数myfun1函数的共享库文件
    handle = dlopen("./mylib.so", RTLD_LAZY);

    if(!handle){
        fprintf(stderr, "%s\n", dlerror());
        exit(1);
    }

    // 获取一个指向函数myfun1的指针myfunc1
    myfun1 = dlsym(handle, "myfun1");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", dlerror());
        exit(1);
    }

    myfun1();

    // 关闭卸载共享库文件
    if(dlclose(handle) < 0){
        fprintf(stderr, "%s\n", dlerror());
        exit(1);
    }

    return 0;
}

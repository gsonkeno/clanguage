//
// Created by ruchen on 2021/11/20.
//

// myfun1函数实际是在 mypro1.c文件中定义的,这里libmain.c 生成.o文件后，
// 与静态库mylib.a(内部包含mypro1.o)文件做静态链接，生成可执行目标文件，
// 即可正常运行

// gcc -c libmain.c
// gcc -static -o libmain libmain.o ./mylib.a

// 那么如何自定义一个动态共享库文件呢？
// gcc -c mypro1.c mypro2.c
// gcc -shared -fPIC -o mylib.so mypro1.o mypro2.o
void myfun1();

int main(){
    myfun1();
    return 0;
}


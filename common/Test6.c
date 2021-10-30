//
// Created by ruchen on 2021/9/23.
//

# include "stdio.h"

int main(){
    static short num[][4] = {
            {2,9,-1,5},
            {3,8,2,-16}
    };

    static short *pn[] = {num[0], num[1]};
    static short s[2] = {0,0};

    int i,j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            //   这里其实是两步
            //   s[i]  <--- s[i] + *pn[i]
            //   pn[i] <--- pn[i] + 1      ; 这里指pn[i]指针只想下一个地址
            s[i] += *pn[i]++;
        }

        printf("sum of line %d: %d\n", i+1, s[i]);
    }
    return 0;
}


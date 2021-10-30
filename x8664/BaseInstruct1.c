//
// Created by ruchen on 2021/10/24.
//

long samp(int x, int y){
    long t1 = (long)x + y;
    long t2 = x + (long)y;
    return t1|t2;
}

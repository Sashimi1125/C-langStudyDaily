// 随机数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    int num = rand()%51+13;
    printf("num = %d\n", num);
    return 0;
}
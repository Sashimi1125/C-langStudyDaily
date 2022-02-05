#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int i = 1;
    int i6 = 0;
    while (i <= 100) {
        if (i % 6 == 0) {
            i6++;
        }
        i++;
    }
    printf("6的倍数的个数：%d个", i6);
    return 0;
}
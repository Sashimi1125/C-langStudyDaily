#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    printf("-----------------------------------------");
    int money = 10000;
    double yrate = 0.003;
    for (int i = 0; i < 5; i++){
        money += money * yrate;
    }
    printf("本金：%d", money);
    printf("--------------------------------------------");
    
    for (int i = 100; i <= 999; i++){
        int b = i / 100, s = i % 100 / 10, g = i % 10;
        if (i % 7 != 0 && b != 7 && s != 7 && g != 7){
            printf("%d\n", i);
        }
    }
}
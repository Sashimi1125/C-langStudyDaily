#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*int random = 0;*/
    /*srand((signed)time(NULL));
    random = rand() % 999;
    printf("随机数: %d \n", random);*/
    int n1 = 0, n2 = 0, n3 = 0;
    printf("输入三个整型的数: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {
        printf("n1是最大值");
    }else if (n2 > n1 && n2 > n3) {
        printf("n2是最大值");
    }else {
        printf("n3是最大值");
    };
    return 0;
}
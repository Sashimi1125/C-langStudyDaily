#include <stdio.h>
#include <stdlib.h>

int main() {
    int max = INT_MIN;
    int i = 0;
    while (i <= 5) {
        printf("请输入一个数：");
        int num = 0;
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        i++;
    }
    printf("最大值：%d", max);
    return 0;
}
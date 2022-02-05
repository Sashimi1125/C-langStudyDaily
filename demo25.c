#include <stdio.h>
#include <stdlib.h>

int main () {
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    printf("---------华丽分割线---------\n");
    int sxsum = 0;
    for (int i = 100; i <= 999; i++)
    {
        int b = i / 100, s = i % 100 / 10, g = i % 10;
        if (b*b*b + s*s*s + g*g*g == i) {
            sxsum += i;
            printf("水仙花数%d\n", i);
        }
    }
    printf("水仙花数和为%d\n", sxsum);
    return 0;
}
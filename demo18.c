#include <stdio.h>
// 循环体 break 立即停止当前循环结构
// continue 立即停止本次循环，立即回去判断循环条件
int main () {
    int sum = 0;
    int i = 0;
    while (i < 5) {
        int isu = 0;
        printf("请输入整数：");
        scanf("%d", &isu);
        sum += isu;
        i++;
    }
    printf("累加之和为：%d\n", sum);
    printf("平均值为：%d\n", sum / 5);
    return 0;
}
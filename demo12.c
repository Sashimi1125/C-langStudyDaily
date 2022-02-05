#include <stdio.h>

int main() {
    double num = 0.0;
    printf("请输入一个浮点数进行四舍五入计算：");
    scanf("%lf", &num);
    int i = num; //拿到整数部分
    double desc = num - i;
    if (desc > 0.5) {
        i++;
    }
    printf("i=%d", i);
    return 0;
}
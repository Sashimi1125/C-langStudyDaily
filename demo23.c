#include <stdio.h>
#include <stdlib.h>
int main () {
    double avg = 0.0;
    int count = 0;
    int i = 1;
    while (i <= 5) {
        printf("请输入第%d个人的年龄:", i);
        int age = 0;
        scanf("%d", &age);
        if (age < 0) {
            printf("非法输入(小于下限)，程序退出");
            break;
        } else if (age > 100) {
            printf("非法输入(超出上限),程序退出");
            break;
        } else {
            count += age;
        }
        i++;
    }
    if (i == 5) {
        avg = count / 5;
        printf("所有人的平均年龄为:%.1lf岁", avg);
    }
    return 0;
}
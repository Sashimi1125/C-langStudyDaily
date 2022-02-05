#include <stdio.h>

int main() {
    int password = 0;
    printf("请输入密码：");
    scanf("%d", &password);
    if (password != 888888) {
        printf("请输入密码：");
        scanf("%d", &password);
        if (password != 888888) {
            printf("密码错误");
        } else {
            printf("密码正确");
        }
    } else {
        printf("密码正确");
    }
}
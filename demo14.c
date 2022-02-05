#include <stdio.h>

int main() {
    char ch = 'a';
    printf("请输入一个字符：");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("这是小写");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("这是大写");
    } else {
        printf("不是字母");
    }
    return 0;
}
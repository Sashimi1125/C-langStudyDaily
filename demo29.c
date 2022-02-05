#include <stdio.h>
#include <stdlib.h>
// 声明一个全局变量 如果没有为这个全局变量赋值初始值 
// 那么系统就会指导的给这个char变量赋值一个 '\0'
// '\0' 代表1个不可见的字符
// 判断一个函数是不是水仙花数
// C语言函数参数不声明类型默认是int 类型

void isWaterNum (int num) {
    int b = num / 100, s = num % 100 / 10, g = num % 10;
    if (b*b*b + s*s*s + g*g*g == num) {
        printf("是水仙花数了");
    } else {
        printf("不是水仙花数了");
    }
}
int main() {
    isWaterNum(123);
}
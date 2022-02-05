#include <stdio.h>

int main () {
    /*int i = 0;
    while (i<5){
        i++;
        printf("我爱黑马 %d次\n", i);
    };*/
    int inputsm = 0;
    int i = 0;
    while(i < 5) {
        i++;
        printf("请输入一个数:");
        scanf("%d", &inputsm);
        inputsm = inputsm * 2;
        printf("结果：%d", inputsm);
    };
    return 0;
}
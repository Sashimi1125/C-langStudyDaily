#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main (){
     srand((signed)time(NULL));
     int score = 10;
     int i = 1;
     while(i <= 10){
        int sn1 = rand() % 90 + 10, sn2 = rand() % 90 + 10;
        int res = sn1 + sn2;
        int yres = 0;
        printf("请输入 %d + %d 的运算结果：", sn1, sn2);
        scanf("%d", &yres);
        if (res == yres) {
            score++;
            printf("恭喜你 回到正确！\n");
        } else {
            score--;
            printf("回答错误\n");
        }
            printf("你的分数为%d", score);
        i++;
     }
     return 0;
 }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand((signed)time(NULL));
    int i = 1;
    int ramNum = rand() % 99 + 1;
    while(1){
        int uNum = 0;
        printf("猜数字游戏，请输入你猜的数字：");
        scanf("%d", &uNum);
        if (uNum == ramNum) {
            printf("恭喜你猜对了，猜了%d次\n", i);
            break;
        } else if (uNum > ramNum) {
            printf("不好意思，猜大了\n");
            continue;
        } else if (uNum < ramNum) {
            printf("不好意思猜小了\n");
            continue;
        }
        i++;
    }
    return 0;
}
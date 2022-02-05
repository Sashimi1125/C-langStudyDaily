// 请写一个ATM 程序
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    double atmMoney = 0;
    int money = 0;
    srand((unsigned)time(NULL));
    atmMoney = rand() % 999;
    printf("账户余额%lf、 输入取款金额：", atmMoney);
    scanf("%d", &money);
    if (money % 100 != 0) {
        printf("对不起，本机器无法提供输入的面额");
    } else {
        if (money < atmMoney) {
            printf("正在出钞，请从钞口拿钱，ATM机器剩余%lf\n", atmMoney-money);
        } else {
            printf("对不起，余额不足");
        }
    }
    return 0;
}
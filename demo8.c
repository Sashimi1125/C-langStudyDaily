#include <stdio.h>

int main() {
    /* int lkMoney = 0;
    printf("请输入李凯钱包里的钱：");
    scanf("%d", &lkMoney);
    if (lkMoney >= 100) {
        printf("lkMoney=%d\n 有100 放学请吃饭", lkMoney);
    } else {
        printf("否则 放学天台见");
    }*/
    //请用户输入他儿子的成绩
    /* int chinese = 0, maths = 0, english = 0;
    printf("请您输入你儿子的语文、数学、英语成绩：");
    scanf("%d%d%d", &chinese, &maths, &english);
    if (chinese < 60 || maths < 60 || english < 60) {
        printf("有一门不及格，打死");
    } else {
        printf("be一个");
    }*/
    // 妈妈喊回家吃饭
    int age = 0, sex = 0;
    printf("请输入你的年龄和性别：");
    scanf("%d%d", &age, &sex);
    if (sex == 0) {
        printf("你妈妈喊你回家吃饭");
    } else if (age >= 18) {
        printf("给你点刺激的东西看看");
    } else {
        printf("你妈妈喊你回家吃饭");
    }
    return 0;
}
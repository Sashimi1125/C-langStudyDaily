/*
  int 类型 表示 boole 类型 真假 0  假 1真
  no and or
  取反优先级最高
  & 取地址
  
*/
#include <stdio.h>

int main() {
  /*int res = 10 <= 20;
  printf("res=%d", res);*/
  /*int chinese = 0;
  int maths = 0;
  printf("请输入小明的语文成绩和数学成绩: ");
  scanf("%d%d", &chinese, &maths);
  int both_9 = chinese >= 90 && maths >= 90;
  int or_9 = chinese >= 90 || maths >= 90;
  printf("两门都大于90：%d, 任意一名大于90 %d", both_9, or_9);*/
  int year = 2013;
  int isRun = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
  printf("是否闰年：%d", isRun);
  return 0;
}
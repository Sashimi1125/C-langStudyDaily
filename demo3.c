#include <stdio.h>
// scanf多个 数据 多个占位符 多个 输入
// 混合输入 会错误
int main () {
  // float f1 = 0.0f;
  // printf("请输入一个 浮点数: ");
  // scanf("%f", &f1);
  // printf("你输入的数据是: %f\n", f1);

  // double d1 = 0.0;
  // printf("请输入一个 double: ");
  // scanf("%lf", &d1);
  // printf("你输入的数据是: %lf", d1);

  // char ch = 'a';
  // printf("请输入一个字符: ");
  // scanf("%c", &ch);
  // printf("你输入的字符是：%c", ch);

  // int num = 0, num1 = 0;
  // printf("请输入两个数据： ");
  // scanf("%d%d", &num, &num1);
  // printf("num = %d num1 = %d", num, num1);

  // int num = 0;
  // printf("请输入一个数字：");
  // scanf("%d", &num);
  // printf("num = %d", num);
  // char ch = 'a';
  // printf("请输入一个字符");
  // rewind(stdin); //清空缓冲区 字符数字 混合输入 清空缓冲区
  // scanf("%c", &ch);
  // printf("ch=%c", ch);

  // int m1 = 100, m2 = 200;
  // m1 = m1 ^ m2;
  // m2 = m2 ^ m1;
  // m1 = m1 ^ m2;
  // printf("m1=%d,m2=%d", m1, m2);
  int num1 = 10;
  double num2 = 4;

  double res = num1 / num2;
  printf("%lf", res);
}
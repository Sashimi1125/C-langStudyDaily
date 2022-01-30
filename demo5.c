#include <stdio.h>
// 前自增 先计算 再赋值
// 后自增 先赋值 再计算
// 自增运算符的 优先级 比算数 运算符的 优先级高
// 逗号表达式的结果 并不是 想要前面表达式的 结果
// 而只是 要最前面的 表达式 执行 要最后一个表达式的 结果
// 逗号表达式 不需要 前面的结果
int main() {
  // int i = 1;
  // int j = i++;
  // int i = 1;
  // int j = ++i;
  /*int i = 1;
  int j = 2;
  int k = i++ + ++j + i++; //应该是6*/
  /*printf("k=%d", k);*/
  /*printf("i = %d, j = %d", i, j);*/
  /*int i = 1;
  int j = i++ + ++i + i++ + ++i + i++; // 17?*/
  int i = 0, j = 1, k = 2;
  int num = (i + 3, j + 3, k+3, i + k);
  printf("num=%d\n", num);
  return 0;
}
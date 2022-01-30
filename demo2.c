#include <stdio.h>
// 用户数据 存到变量地址&
// scan 是阻塞式函数
int main() {
  int num = 0;
  int age = 0;
  printf("请输入 小号码: ");
  scanf("%d", &num);
  printf("请输入 大密码: ");
  scanf("%d", &age);
  printf("num = %d\n", num);
}
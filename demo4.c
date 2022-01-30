#include <stdio.h> //预处理器头部

int main() {
  // 某超市 衣服 120.88 一件 裤子89.9 一条
  // 先声明实型变量
  float cloth = 120.88f;
  float pants = 89.9f;
  int num_cloth = 0; // 衣服数量
  int num_pants = 0; // 裤子数量
  printf("请输入您要购买的衣服数量和裤子数量：");
  scanf("%d-%d", &num_cloth, &num_pants);
  // 商品总价
  float total = cloth * num_cloth + pants * num_pants; //原价
  float discuTotal = total * 0.88;
  printf("您需要支付的商品原价：%f, 打折后总价 ：%f", total, discuTotal);
}
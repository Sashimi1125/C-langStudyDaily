#include <stdio.h>

int main() {
  /*int lkMoney = 0;
  printf("请输入离开兜里的钱: ");
  scanf("%d", &lkMoney);
  if (lkMoney >= 100) {
    printf("走大家一起吃饭");
  }
  printf("走咯回家啦");*/
  int chinese = 0;
  int maths = 0;
  int english = 0;
  printf("请输入您儿子的语文、数学、英语成绩：");
  scanf("%d%d%d", &chinese, &maths, &english);
  int avg = (chinese + maths + english) / 3;
  if (avg >= 60) {
    printf("恭喜您得到一个 wen\n");
  };
  printf("查询end");
  return 0;
 }
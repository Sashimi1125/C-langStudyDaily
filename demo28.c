#include <stdio.h>
// go to
// 标签名 下面 的那一句 代码 不能 是赋值语句; 如果一定要是 
// 硬要加 需要 无效语句
// break while for 都是一样的
// continue while 是 结束本次循环 后面代码不执行； for是 结束本次循环 i++ 继续执行
// break continue 只能结束当前循环 外层的循环
/*for(int i =0; i<10; i++){
    for(int j=0; j<10; j++){
        写一段代码 结束最外层循环
        i = 10;
        break;
    }
}*/
int main() {
    int user = 0, pss = 0;
    loop:
        printf("1111111");
        goto loop;
}
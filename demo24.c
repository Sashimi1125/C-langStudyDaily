#include <stdio.h>

//穷举
int main (){
    /*char ch = 'a';
    do{
        printf("你爱我吗？y/n:");
        rewind(stdin);
        scanf("%c", &ch);
    } while (ch == 'n');*/
    char ch = 'a';
    do {
        printf("请为张三同学的歌曲是否满意n/y：");
        rewind(stdin);
        scanf("%c", &ch);
    } while (ch == 'n');
    return 0;
}
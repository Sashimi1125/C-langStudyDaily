#include <stdio.h>

int main () {
    /*char ch = 'n';
    while (ch != 'y') {
        printf("你爱我吗？y/n");
        scanf("%c", &ch);
        rewind(stdin);
    }*/
    int acount = 0;
    int pwd = 0;
    int pass = 0;
    while (pass != 1) {
        printf("请输入账号：");
        scanf("%d", &acount);
        if (acount == 123456) {
            printf("请输入密码：");
            scanf("%d", &pwd);
            if (pwd == 888888){
                pass = 1;
            } else {
                pass = 0;
            }
        } else {
            pass = 0;
        }
    }
    printf("登录成功");
    return 0;
}
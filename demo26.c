#include <stdio.h>
#include <stdlib.h>

int main (){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("--------华丽分割线---------\n");
    for (int i = 0; i < 10; i++){
            for (int k = 0; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    for (int i = 10; i >= 0; i--){
            for (int j = 0; j <= i; j++){
                printf("*");
            }
            printf("\n"); 
        }
    printf("---------------------------------\n");
    for (int i = 0; i <=10; i++)
    {
        for (int s = 0; s <= 10; s++){
            if (s >= 10 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
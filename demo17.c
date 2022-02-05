#include <stdio.h>

int main () {
    /*int i = 100;
    while (i <= 200) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    };*/
    int i = 1000;
    while (i <= 5000) {
        int b = 0, q = 0, s = 0, g = 0;
        b = i / 1000;
        q = i % 1000 / 100;
        s = i % 1000 % 100 / 10;
        g = i % 10;
        if (b + q + s + g == 5) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
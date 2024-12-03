#include <stdio.h>

int main () {
    int a, b;
    for(a=0;a<9;a++) {
        for(b=9;b>a;b--) {
            printf("*");
        }
        printf("\n");
    }
}
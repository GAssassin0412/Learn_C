#include <stdio.h>

int main () {
    int a, b, c;
    for(a=0;a<9;a++) {
        for(c=0;c<a;c++) {
            printf(" ");
        }
        for(b=0;b<9-a;b++) {
            printf("*");
        }
        printf("\n");
    }
}
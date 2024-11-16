#include <stdio.h>

int main() {
    int i, j;
    i = 0;

    for(j=0;j<9;j++) {
        for (i=0;i<5;i++) {
            printf("*");
        }
        printf(" ");
    }

}
#include <stdio.h>

int main() {
    int i,j,k;
    for(i=0;i<9;i++) {
        for(k=0;k<i;k++) {
            printf(" ");
        }
        for(j=9;j-i>0;j--) {
            printf("*");
        }
        printf("\n");
    }
}
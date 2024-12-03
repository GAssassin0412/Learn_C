#include <stdio.h>

int main() {
    int num;
    int i, j, k;

    //printf("请输入需要多少行星星：");
    //scanf("%d",&num);
    num = 5;

    for(i=0;i<num;i++) {
        for(j=0;j<num-i-1;j++) {
            printf(" ");
        }
        for(k=0;k<2*i+1;k++) {
            printf("*");
        }
        printf("\n");
        
    }
}
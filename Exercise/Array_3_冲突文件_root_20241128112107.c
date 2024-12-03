#include <stdio.h>
#define N 20

int main() {
    int num[N]={1,1};
    int i;

    //num[0] = num[1] = 1;

    for(i=2;i<N;i++) {
        num[i]=num[i-1] + num[i-2];
    }

    for(i=0;i<N;i++) {
        printf("%d,",num[i]);
        if (i%9==0) {
            printf("%d");
        }
    }
    printf("\b \n");

}
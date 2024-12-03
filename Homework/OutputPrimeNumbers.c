#include <stdio.h>

int main() {
    int num;
    int i, j, k;

    for(k=j=1;j<1001;j++) {                       //穷举1-1000的数字。
        num = j;
        for(i=2;i<num;i++) {                    //用于判断一个数是否为素数。
            if (num%i==0) {
                //printf("%d不是素数。\n",num);
                break;
            }
        }
        if (i == num) {
            printf("%-3d ",num);
            k++;
            if (k%20==0) {
                printf("\n");
            }
        }
    }
    printf("\n");
}
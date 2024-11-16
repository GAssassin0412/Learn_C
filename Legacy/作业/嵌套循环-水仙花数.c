#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<10;i++) {
        for(j=0;j<10;j++) {
            for(k=0;k<10;k++) {                 //使用三重循环遍历100-999
                //printf("%d\n",i*100+j*10+k);
                if(i*100 + j*10 + k == i*i*i + j*j*j + k*k*k) {     //当数字立方和等于该数本身时，输出数字。
                    printf("%d\n",i*100+j*10+k);
                }
            }

        }
    }
    return 0;
}
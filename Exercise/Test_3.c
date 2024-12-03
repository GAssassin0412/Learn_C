#include <stdio.h>

int main() {
    int i, j, k, sum;
    sum = 1;
    for(i=1;i<5;i++) {      //4列
        k=i;                    //每一行的公差设为k
        sum=i;                  //每新一行时将sum初始化为i的值
        for(j=0;j<5;j++) {      //5行
            printf("%3d",sum);
            sum += k;
        }
        printf("\n");           //每一行结束循环时换行
    }
}
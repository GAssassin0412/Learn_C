#include <stdio.h>
#define N 20

int main() {
    int num[N]={1,1};           //定义数组有20个容量，赋值前两个数组为1，1.
    int i;


    for(i=2;i<N;i++) {          //从2开始遍历i，把斐波那契数列存入数组
        num[i]=num[i-1] + num[i-2];
    }

    for(i=0;i<N;i++) {          //打印输出
        printf("%5d,",num[i]);
        if ((i+1)%10==0) {      //每10个数一换行
            printf("\b \n");
        }
    }

}
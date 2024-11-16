//输入任意一个整数，计算各位数的立方和，如：输入205，显示结果133（即：2^3+0^3+5^3)

#include<stdio.h>

int main() {
    int i, sum, num;
    sum = 0;

    printf("请输入数字：");
    scanf("%d", &i);

    for(;i!=0;) {
        num=i%10;
        sum+=num*num*num;
        i=i/10;
    }

    printf("立方和为：%d\n",sum);
}
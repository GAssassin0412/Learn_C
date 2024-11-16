//编写程序，求1!+2!+......+n!，n由键盘输入。
#include <stdio.h>

int main() {
    int a, sum=0;         //定义全局变量
    int i, j;           //定义仅循环内使用的变量

    printf("求1!+2!+......+n!，n由键盘输入：");
    scanf("%d",&a);

    for(;a>0;a--) {
        j = 1;          //每次循环开始时，使j的值为1
        for(i=1;i<=a;i++) {
            //printf("%d",i);
            j *= i;     //使j赋值为i的阶乘
        }
        //printf("%d",j);
        //printf("\n");

        sum += j;
    }
    printf("阶乘之和为：%d\n",sum);
    return 0;
}
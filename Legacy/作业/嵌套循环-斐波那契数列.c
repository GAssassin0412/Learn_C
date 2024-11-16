//编写程序，输出斐波那契数列的前20项。
//斐波那契数列，其定义是：前两项均为1，从第三项开始，每一项都等于前两项之和，即：1，1，2，3，5，8
#include <stdio.h>

int main() {
    int a,b,c;
    int i;
    a = b = 1;

    printf("1, 1");         //打印前两个数
    for(i=2;i<20;i++) {     
        c = a + b;
        printf(", %d",c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
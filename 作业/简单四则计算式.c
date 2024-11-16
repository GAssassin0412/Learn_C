#include <stdio.h>
int main () {
    int a, c;   //第一位与第二位数字
    char b;     //运算符


/*
    printf("请输入计算式（如：5+6）：");    //提示用户输入信息

    scanf("%d",&a);
    scanf("%c",&b);
    scanf("%d",&c);

    printf("%d%c%d=",a,b,c);           //输出用户打印的计算式
*/
    printf("请输入第一个数字：");
    scanf("%d", &a);
    printf("请输入运算符：");
    scanf(" %c", &b);
    printf("请输入第二个数字：");
    scanf("%d", &c);




    if (b == '+') {                     //判断加减乘除，并进行运算
        printf("%d\n",a + c);
    } else if (b == '-') {
        printf("%d\n",a - c);
    } else if (b == '*') {
        printf("%d\n",a * c);
    } else if (b == '/') {
        printf("%d\n",a / c);
    } else {
        printf("\n运算符输入错误！\n");
    }

}
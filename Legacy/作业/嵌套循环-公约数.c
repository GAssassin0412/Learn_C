//任意输入两个整数，计算它们的最大公约数。
#include <stdio.h>
int main() {
    int a,b,c;
    int i;

    printf("任意输入两个整数，计算它们的最大公约数。\n");
    printf("请输入第一个数字：");
    scanf("%d",&a);
    printf("请输入第二个数字：");
    scanf("%d",&b);

    if (b > a) {        //使a为最大值
        c = b;
        b = a;
        a = c;
    }
    for(i=b;i>0;i--) {              //使i倒序遍历
        //printf("%d",i);
        if(a%i==0&&b%i==0) {        //如果二者间没有余数则输出数值并跳出循环
            printf("最大公约数是%d\n",i);
            break;
        }
    }
    return 0;
}
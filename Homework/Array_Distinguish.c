#include <stdio.h>
//编写程序，任意输入一个字符串，分别统计并输出其中大写字母、小写字母、数字、其它字符的数量。
#define N 500

int main() {
    char str[N];
    int i, count;
    int uppercase, lowercase, number, others;
    uppercase = lowercase = number = others = 0;

    printf("请输入一段字符串（不能有空格）：");
    scanf("%s",str);

    for(i=0;i<500;i++) {        
        if (str[i]=='\0') {             //使用i遍历字符串，当字符串有空字符时，跳出循环。
            //printf("%d\n",i);
            break;
        }
        if (str[i]>='a' && str[i]<='z') {       //在a-z时，计数++；
            lowercase++;
        }else if (str[i]>='A' && str[i]<='Z') { //在A-Z时，计数++；
            uppercase++;
        }else if (str[i]>='0' && str[i]<='9') { //在0-9时，计数++；
            number++;
        }else {                                 //其他字符串，计数++；
            others++;
        }
    }
    printf("大写字母的个数：%d\n",uppercase);           //输出部分
    printf("小写字母的个数：%d\n",lowercase);
    printf("数字的个数：%d\n",number);
    printf("其他字符的个数：%d\n",others);
}
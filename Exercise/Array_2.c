#include <stdio.h>
#define N 5

//编写程序，任意输入5个数，统计奇数、偶数的个数并输出，用数组完成。

int main() {
    int a[N];                   //定义一个数组，用于存储5个数
    int i;
    int odd = 0, even = 0;      //定义odd为奇数，even为偶数

    for(i=0;i<N;i++) {              //使用循环输入数字
        printf("第%d个数组：",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<N;i++) {              //重新初始化i的值，遍历i至N（5），使用双分支判断奇偶数
        if (a[i]%2==0) {
            even++;
        }else {
            odd++;
        }
    }
    printf("奇数的个数为：%d\n",odd);       //输出结果
    printf("偶数的个数为：%d\n",even);
    return 0;
}
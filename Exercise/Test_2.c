//编写代码实现：求 s不超过500时 n 的最大值，其中 s = 1 + 2 + 3 + ...... + n（提交代码和运行结果图）
#include <stdio.h>
int main() {
    int s=0, n;
    for(n=1;;n++) {         //使n初始化为1，死循环，每次n+1；
        s += n;
        if (s>500) {        //当s（求和）大于500时，跳出循环。
            break;
        }
    }
    printf("%d\n",n-1);     //因为跳出循环时n不符合条件，所以n-1.
}
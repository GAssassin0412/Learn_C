#include <stdio.h>
#define N 5

int main() {
    int a[N];
    int i;
    int max, min;
    int temp;

    for(i=0;i<N;i++) {
        printf("第%d个数组：",i+1);
        scanf("%d",&a[i]);
    }

    max = 0;
    min = 0;
    for(i=1;i<N;i++) {
        if (a[max]<a[i]) {
            max = i;
        }
        if (a[min]>a[i]) {
            min = i;
        }
    }


    printf("最大值：%d\n",a[max]);
    printf("最小值：%d\n",a[min]);

    temp = a[max];
    a[max] = a[min];
    a[min] = temp;

    for(i=0;i<N;i++) {
        printf("%d\n",a[i]);
    }

    return 0;
}
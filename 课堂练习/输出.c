#include <stdio.h>
int main () {
	int a;
	printf("请输入一个两位数整数：");
	scanf("%d",&a);
	//printf("%d",a);
	printf("十位数为%d,\n个位数为%d。",a/10,a%10);
	return 0;
} 

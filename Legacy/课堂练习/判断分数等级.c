#include <stdio.h>

/*
任意输入一个成绩（整数），判断等级
90 - 100 ：A
80 - 89 ：B 
70 - 79 ：C 
60 - 69 ：D
00 - 59 ：E 
*/

int main () {
	//声明一个整型，用作用户输入 
	int a;
	
	//提示用户输入 
	printf("请输入您要判断的成绩（0 - 100）：");
	scanf("%d",&a);
	

	//判断等级 
	if (90 <= a && a <= 100) {
		printf("您的成绩是%d，评级为：A。",a);
	} else if (80 <= a && a <= 89) {
		printf("您的成绩是%d，评级为：B。",a);
	} else if (70 <= a && a <= 79) {
		printf("您的成绩是%d，评级为：C。",a);
	} else if (60 <= a && a <= 69) {
		printf("您的成绩是%d，评级为：D。",a);
	} else if (0 <= a && a <= 59)  {
		printf("您的成绩是%d，评级为：E。",a);
	} else {
		printf("您输入的成绩%d，不在0 - 100分内。",a);
	}
}

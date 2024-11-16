#include <stdio.h>

int main () {
	float C;	//定义浮点型C为摄氏度 
	float F;	//定义浮点型F为华氏度
	printf("请输入摄氏温度C：");
	scanf("%f",&C);
	
	F = C * 9 / 5 + 32;	//计算华氏度 
	printf("换算的华氏度为%.1fF。\n",F); 
	return 0;
}

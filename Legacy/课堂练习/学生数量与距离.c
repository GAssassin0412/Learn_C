#include <stdio.h>
int main () {
	int a;		//在校学生数量，整数型 
	float b;	//学校到家的距离，浮点型 
	printf("请输入在校学生数量（位）：");
	scanf("%d",&a);
	getchar();
	printf("请输入在学校到家的距离（千米）：");
	scanf("%f",&b);

	printf("在校学生数量为：%d（位）,\n",a);	//输出在校学生数量， 整数 
	printf("学校到家的距离：%.2f（千米）。",b);	//输出学校到家的距离，保留两位小数 
}

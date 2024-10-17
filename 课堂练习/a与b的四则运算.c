#include <stdio.h>

int main() {
	int a,b,c;
	int add,sub,mul,div;

	printf("请输入a的值：");
	scanf("%d",&a); 
	printf("请输入b的值：");
	scanf("%d",&b); 
	
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	
	printf("+-----------+-----------+\n"); 
	printf("|  表达式   |    值     |\n");
	printf("+-----------+-----------+\n"); 
	printf("|  a  +  b  |%6d     |\n",add); 
	printf("+-----------+-----------+\n"); 
	printf("|  a  -  b  |%6d     |\n",sub); 
	printf("+-----------+-----------+\n"); 
	printf("|  a  *  b  |%6d     |\n",mul); 
	printf("+-----------+-----------+\n"); 
	printf("|  a  /  b  |%6d     |\n",div); 
	printf("+-----------+-----------+\n"); 
	return 0;
}

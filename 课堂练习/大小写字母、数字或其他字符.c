//任意输入一个字符，判断是否为大小写字母、数字或其他字符。 
#include <stdio.h>

int main () {
	char c; 
	
	printf("请输入一个字符：");
	scanf("%c",&c);
	printf("%d\n",c);
	
	if (c >= 'A' && c <= 'Z') {
		printf("您输入的字符%c是大写字母。\n",c);
	}else if (c >= 'a' && c <= 'z') {
		printf("您输入的字符%c是小写字母。\n",c);
	}else if (c >= '0' && c <= '9') {
		printf("您输入的字符%c是数字。\n",c);
	}else {
		printf("您输入的字符%c是其他字符。\n");
	}

}

//任意输入一个字母，判断大小写 
#include <stdio.h>

int main () {
	char c;
	
	printf("请意输入一个字母（a-z 或 A-Z），以判断大小写：");
	scanf("%c",&c);
	
	if (c >= 'A' && c <= 'Z') {
		printf("您输入的字符 %c 是大写字母。\n",c);
	}else {
		printf("您输入的字符 %c 是小写字母。\n",c);
	}
}

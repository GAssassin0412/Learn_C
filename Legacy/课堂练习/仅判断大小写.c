//��������һ����ĸ���жϴ�Сд 
#include <stdio.h>

int main () {
	char c;
	
	printf("��������һ����ĸ��a-z �� A-Z�������жϴ�Сд��");
	scanf("%c",&c);
	
	if (c >= 'A' && c <= 'Z') {
		printf("��������ַ� %c �Ǵ�д��ĸ��\n",c);
	}else {
		printf("��������ַ� %c ��Сд��ĸ��\n",c);
	}
}

//��������һ���ַ����ж��Ƿ�Ϊ��Сд��ĸ�����ֻ������ַ��� 
#include <stdio.h>

int main () {
	char c; 
	
	printf("������һ���ַ���");
	scanf("%c",&c);
	printf("%d\n",c);
	
	if (c >= 'A' && c <= 'Z') {
		printf("��������ַ�%c�Ǵ�д��ĸ��\n",c);
	}else if (c >= 'a' && c <= 'z') {
		printf("��������ַ�%c��Сд��ĸ��\n",c);
	}else if (c >= '0' && c <= '9') {
		printf("��������ַ�%c�����֡�\n",c);
	}else {
		printf("��������ַ�%c�������ַ���\n");
	}

}

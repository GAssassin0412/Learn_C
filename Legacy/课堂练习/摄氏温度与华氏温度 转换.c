#include <stdio.h>

int main () {
	float C;	//���帡����CΪ���϶� 
	float F;	//���帡����FΪ���϶�
	printf("�����������¶�C��");
	scanf("%f",&C);
	
	F = C * 9 / 5 + 32;	//���㻪�϶� 
	printf("����Ļ��϶�Ϊ%.1fF��\n",F); 
	return 0;
}

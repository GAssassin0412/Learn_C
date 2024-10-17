#include <stdio.h>
int main() {
	int year;
	printf();
	scanf("%d",&year);
	printf("%d",(year % 4 == 0 && year % 100 != 0 || year % 400 == 0));

}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//�ǽ�����4

int main()
{
	int year;
	printf("���ϴ� �⵵�� �Է��ϼ��� : "); 
	scanf("%d", &year);
	
	if( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		printf("���� �Դϴ�.");
	else
		printf("��� �Դϴ�.");
	
	return 0;
}

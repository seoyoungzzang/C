#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//�ǽ�����5

int main()
{
	int year;
	printf("���ϴ� �⵵�� �Է��ϼ��� : "); 
	scanf("%d", &year);
	
	printf("1�� : 31��\n");
	 
	if( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		printf("2�� : 28��\n");
	else
		printf("2�� : 29��\n");
		
	printf("3�� : 31��\n4�� : 30��\n5�� : 31��\n6�� : 31��\n7�� : 30��\n8�� : 31��\n9�� : 30��\n10�� : 31��\n11�� : 30��\n12�� : 31��\n"); 
	
	return 0;
}

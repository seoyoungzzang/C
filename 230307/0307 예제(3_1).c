#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����3-1 

int main()
{
	int age;
	printf("���̸� �Է��ϼ���  : ");
	scanf("%d", &age);
	
	if (age < 65)
		{
		printf ("���� :  %d��\n", age);
		printf ("��� : 2,000��");
		}
	
	else
		{
		printf ("���� :  %d��\n", age);
		printf ("��� : ����");
		}
	
	return 0;
} 



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����3-7

int main()
{
	int num1, num2 ;
	char op;
	
	printf("���� ������ ���ڸ� �Է��ϼ��� : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	if (op == '+')
		printf("��: %d", num1+num2);
	
	else if (op == '-')
		printf("��: %d", num1-num2);
		
	else if (op == '*')
		printf("��: %d", num1*num2);
		
	else if (op == '/')
		printf("��: %d", num1/num2);
		
	else
		printf ("����");
	
	return 0 ;
}




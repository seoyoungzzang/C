#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//���ڵ�4 

int main()
{
	int korea, math, english ;
	printf("���� ���� �Է� : ");
	scanf("%d", &korea);
	printf("���� ���� �Է� : ");
	scanf("%d", &math);
	printf("���� ���� �Է� : ");
	scanf("%d", &english);
	
	int sum, avg ;
	sum = korea + math + english;
	avg = (korea + math + english)/3;
	
	char grade; 
	
	switch(avg/10) 
	{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	} 
	
	printf("����: %d��, ���� : %d��, ����: %d��\n", korea, math, english);
	printf("����: %d\n", sum);
	printf("���: %d\n", avg);
	printf("���: %c", grade);
	
	return 0;
}

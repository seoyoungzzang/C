#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//���ڵ�3 

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
	
	printf("����: %d��, ���� : %d��, ����: %d��\n", korea, math, english);
	printf("����: %d\n", sum);
	printf("���: %d\n", avg);
	
	if(avg >= 90)
		printf("���: A");
	else if (avg >= 80)
		printf("���: B");
	else if (avg >= 70)
		printf("���: C");
	else if (avg >= 60)
		printf("���: D");
	else
		printf("���: F");
	
	return 0;
}

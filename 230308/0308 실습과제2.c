#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//�ǽ�����2

int main()
{
	int numberA, numberB;
	printf("����A �Է�: ");
	scanf("%d", &numberA);
	printf("����B �Է�: ");
	scanf("%d", &numberB); 
	
	if (numberA > numberB)
		printf("ū ���ڴ� %d �Դϴ�.", numberA);
	else
		printf("ū ���ڴ� %d �Դϴ�.", numberB);
	
	return 0;
	
}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//�ǽ�����3

int main()
{
	int num1, num2, num3, num4, num5;
	printf("����A �Է�: "); 
	scanf("%d", &num1);
	printf("����B �Է�: ");
	scanf("%d", &num2); 
	printf("����C �Է�: ");
	scanf("%d", &num3);
	printf("����D �Է�: ");
	scanf("%d", &num4); 
	printf("����E �Է�: ");
	scanf("%d", &num5);

	int min, max;
	min = num1;
	max = num1;
	
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	if (num4 > max)
		max = num4;		
	if (num5 > max)
		max = num5;
	
	if (num2 < min)
		min = num2;		
	if (num3 < min)
		min = num3;				
	if (num4 < min)
		min = num4;		
	if (num5 < min)
		min = num5;		
	
	printf("�ִ밪�� %d �Դϴ�.", max);
	printf("�ּҰ��� %d �Դϴ�.", min);
		
	return 0;	
}

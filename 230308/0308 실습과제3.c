#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//실습과제3

int main()
{
	int num1, num2, num3, num4, num5;
	printf("숫자A 입력: "); 
	scanf("%d", &num1);
	printf("숫자B 입력: ");
	scanf("%d", &num2); 
	printf("숫자C 입력: ");
	scanf("%d", &num3);
	printf("숫자D 입력: ");
	scanf("%d", &num4); 
	printf("숫자E 입력: ");
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
	
	printf("최대값은 %d 입니다.", max);
	printf("최소값은 %d 입니다.", min);
		
	return 0;	
}

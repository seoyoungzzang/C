#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//실습과제2

int main()
{
	int numberA, numberB;
	printf("숫자A 입력: ");
	scanf("%d", &numberA);
	printf("숫자B 입력: ");
	scanf("%d", &numberB); 
	
	if (numberA > numberB)
		printf("큰 숫자는 %d 입니다.", numberA);
	else
		printf("큰 숫자는 %d 입니다.", numberB);
	
	return 0;
	
}

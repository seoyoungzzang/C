#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//실습과제1 

int main()
{
	
	int number1; 
	printf("숫자 입력 : ");
	scanf("%d", &number1);
	
	if (number1 % 2 == 0)
		printf("짝수 입니다.");
	else
		printf("홀수 입니다."); 
	
	
	return 0;

}

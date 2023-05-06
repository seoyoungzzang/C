#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//실습과제4

int main()
{
	int year;
	printf("원하는 년도를 입력하세요 : "); 
	scanf("%d", &year);
	
	if( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		printf("윤년 입니다.");
	else
		printf("평년 입니다.");
	
	return 0;
}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//실습과제5

int main()
{
	int year;
	printf("원하는 년도를 입력하세요 : "); 
	scanf("%d", &year);
	
	printf("1월 : 31일\n");
	 
	if( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		printf("2월 : 28일\n");
	else
		printf("2월 : 29일\n");
		
	printf("3월 : 31일\n4월 : 30일\n5월 : 31일\n6월 : 31일\n7월 : 30일\n8월 : 31일\n9월 : 30일\n10월 : 31일\n11월 : 30일\n12월 : 31일\n"); 
	
	return 0;
}

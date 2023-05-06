#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제3-1 

int main()
{
	int age;
	printf("나이를 입력하세요  : ");
	scanf("%d", &age);
	
	if (age < 65)
		{
		printf ("나이 :  %d세\n", age);
		printf ("요금 : 2,000원");
		}
	
	else
		{
		printf ("나이 :  %d세\n", age);
		printf ("요금 : 무료");
		}
	
	return 0;
} 



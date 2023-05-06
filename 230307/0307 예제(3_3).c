#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제3-3

int main()
{
	int var1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &var1);
	
	if ( var1 % 2 == 0)
		{
		printf ("짝수");
		}
	
	else
		printf ("홀수");
	
	return 0;
} 



#include <stdio.h>
#include <math.h>
#define _CTR_SECURE_NO_WARNINGS
// 교안연습문제1 (계산기가 5번 수행되도록 변경) 

int main()
{
	int i, num1, num2, result;
	char cal;

	for ( i = 1 ; i < 6 ; i++)
	{
		
	printf("\n %d번째, 수식을 입력하세요: ", i);
	scanf("%d %c %d", &num1, &cal, &num2);

	{
		if( cal == '+') 
		{
		result = num1+num2;
		printf("%d %c %d = %d 입니다.", num1, cal, num2, result);
		}
		else if( cal == '-') 
		{
		result = num1-num2;
		printf("%d %c %d = %d 입니다.", num1, cal, num2, result);
		}
		else if( cal == '*')
		{
		result = num1*num2;
		printf("%d %c %d = %d 입니다.", num1, cal, num2, result);
		}
		else if( cal == '/') 
		{
		result = num1/num2;
		printf("%d %c %d = %d 입니다.", num1, cal, num2, result);
		}
		else if( cal == '^') 
		{
		result = pow(num1, num2);
		printf("%d %c %d = %d 입니다.", num1, cal, num2, result);
		}
	}
	}
	return 0; 	
}

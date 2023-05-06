#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제3-7

int main()
{
	int num1, num2 ;
	char op;
	
	printf("숫자 연산자 숫자를 입력하세요 : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	if (op == '+')
		printf("답: %d", num1+num2);
	
	else if (op == '-')
		printf("답: %d", num1-num2);
		
	else if (op == '*')
		printf("답: %d", num1*num2);
		
	else if (op == '/')
		printf("답: %d", num1/num2);
		
	else
		printf ("오류");
	
	return 0 ;
}




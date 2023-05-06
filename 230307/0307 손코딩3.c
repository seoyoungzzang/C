#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{	
	//손코딩3
	int number1, number2;
	int sum;

	printf("정수 두 개 를 입력하세요  : ");
	scanf("%d %d", &number1, &number2);
	sum = number1 + number2;
	printf("입력하신 정수의 합은 %d입니다.", sum); 
	
	return 0;
}



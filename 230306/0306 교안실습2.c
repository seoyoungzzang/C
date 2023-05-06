#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	int inputValue;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &inputValue);
	
	printf("%d\n", inputValue);
	
	
	int inputValue2, inputValue3;
	
	printf("정수를 두개 입력하세요: ");
	scanf("%d %d", &inputValue2, &inputValue3);
	
	printf("%d %d\n", inputValue2, inputValue3);
		
		
	int inputValue4, inputValue5;
	
	printf("정수를 두개 입력하세요: ");
	scanf("%d %d", &inputValue4, &inputValue5);
	printf("%d\n", inputValue4+inputValue5);
	printf("%d\n", inputValue4*inputValue5);	
	printf("%d\n", inputValue4/inputValue5);
	
	
	int number1, number2;
	int sum, minus, mul, div;
	
	
	printf("정수를  입력하세요(2개): ");
	scanf("%d" "%d", &number1, &number2);
	 
	sum = number1 + number2;
	minus = number1 - number2;
	mul = number1 * number2;
	div = number1 / number2;
	
	printf("%d + %d = %d\n", number1, number2, sum);
	printf("%d - %d = %d\n", number1, number2, minus);
	printf("%d * %d = %d\n", number1, number2, mul);
	printf("%d / %d = %d\n", number1, number2, div);	
	
	
	int var1, var2, var3; 

	printf("식을 입력하세요: ");
	scanf("%d" "%c" "%d", &var1, &var2, &var3);
	
	printf( )
	
	
	return 0;
	
}

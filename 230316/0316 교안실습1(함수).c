#include <stdio.h>
//전역변수 
int resultPlus, resultMinus, resultMul, resultDiv;
int plus(int inputOne, int inputTwo);
int minus(int inputOne, int inputTwo);
int mul(int inputOne, int inputTwo);
int div(int inputOne, int inputTwo);
void printAll(int a, int b);
void calcAll(int a, int b);

int main()
{
	//선언
	int a;
	int b;
	
	//입력
	a = 10;
	b = 2;
	
	//계산
	calcAll(a,b);
	
	//출력
	printAll(a,b);
	 
	return 0;

}

int plus(int inputOne, int inputTwo){
	int result = inputOne + inputTwo;
	return result;
} 

int minus(int inputOne, int inputTwo){
	int result = inputOne - inputTwo;
	return result;
}

int mul(int inputOne, int inputTwo){
	int result = inputOne * inputTwo;
	return result;
}

int div(int inputOne, int inputTwo){
	int result = inputOne / inputTwo;
	return result;
}

void printAll(int a, int b) {
	printf("%d + %d = %d\n", a, b, resultPlus);
	printf("%d - %d = %d\n", a, b, resultMinus);
	printf("%d * %d = %d\n", a, b, resultMul);
	printf("%d / %d = %d\n", a, b, resultDiv);
}

void calcAll(int a, int b) {
	resultPlus = plus(a, b);
	resultMinus = minus(a, b);
	resultMul = mul(a, b);
	resultDiv = div(a, b);
}

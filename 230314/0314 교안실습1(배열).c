#include<stdio.h>

int main()
{
	//배열기초 
//	int numArr[10] = {0, 1};
//	
//	printf("%d\n", numArr[0]);
//	printf("%d\n", numArr[5]);
//	printf("%d\n", numArr[1]);

	//반복문으로 배열값 출력
//	int num[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
//	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
//		printf("%d\n", num[i]); 

//	//연습문제1 배열의 값 합계 구하기
//	int num[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
//	int sum = 0; 
//	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
//		sum = sum + num[i];
//		printf("%d\n", sum); 

	//연습문제2 배열의 값을 2배로 만들어서 출력하기
	int num[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	int mul; 
	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
		num[i] = num[i] * 2;
	
	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
		printf("%d\n", num[i]);
	
	 
	return 0;
}

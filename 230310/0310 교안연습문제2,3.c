#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
 
int main()
{
// 교안연습문제2 (1에서 100까지의 합) 
	/*
	int i, result;
	
	for ( i=1 ; i < 101 ; i++);
		result = result + i;
	
	
	printf("1에서 100까지의 합은 %d입니다.", result);
	*/
	
// 교안연습문제3 (1에서 n까지의 합)
	int count;
	long sum;
	printf("N을 입력하세요: ");
	scanf("%d", &count);
	
	for (int i = 1 ; i <= count ; i++)
		{
		sum = sum + i;
		}	
	printf("1에서 %d까지합은 %ld 입니다.", count, sum);
	
	return 0;
}

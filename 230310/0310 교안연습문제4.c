#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
// 교안연습문제4 (구구단출력하기) 
// i가 2일때 j가 1부터 9까지 9번 반복 실행하고,  i가 3일때 j가 1부터 9까지 9번 반복 실행을 반복하는 형식  
int main()
{
	int i, j;

	for (i=2 ; i<10 ; i++)
		{
		printf("%d단\n", i);
		for (j =1; j <10 ; j++)
		printf("%d * %d = %d\n", i, j, i * j);
		printf("\n");
		}
	
		return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//교재 3-16 10단을 제거한 구구단 만들기

int main()
{
	int i, j;
	for (i=2 ; i<10 ; i=i+3)
		{
		for(j=1 ; j<10 ; j++)
		{
		printf("%d x %d = %d\t", i, j, i*j);
		printf("%d x %d = %d\t", i+1, j, (i+1)*j);
		if (i != 8)
			printf("%d x %d = %d", i+2, j, (i+2)*j);
		printf("\n");
		}
		printf("\n");
		}
	
	
	return 0;
 } 

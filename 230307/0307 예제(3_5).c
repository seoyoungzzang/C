#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제3-5

int main()
{
	int excel, pp, word ;
	printf("엑셀, 파워포인트, 워드의 점수를 입력하세요 : ");
	scanf("%d %d %d", &excel, &pp, &word);
	
	int avg;
	avg = (excel + pp + word) /3 ;
	
	if (avg >= 60 && excel >= 40 && pp >= 40 && word >= 40) 
		{
		printf("엑셀 : %d, 파워포인트 :  %d, 워드 :  %d \n", excel, pp, word);
		printf("평균 : %d\n", avg);
		printf( "합격");
		}
		
	else
		{
		printf("엑셀 : %d, 파워포인트 :  %d, 워드 :  %d \n", excel, pp, word);
		printf("평균 : %d\n", avg);
		printf ("불합격");
		}
		
	return 0 ;
}




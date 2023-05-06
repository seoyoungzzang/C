#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//예제3-6

int main()
{
	int score ;
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("A등급");
	
	else if (score >= 80)
		printf("B등급");
		
	else if (score >= 70)
		printf("C등급");
		
	else if (score >= 60)
		printf("D등급");
		
	else
		printf ("F등급");
	
	return 0 ;
}



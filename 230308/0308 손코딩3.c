#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//손코딩3 

int main()
{
	int korea, math, english ;
	printf("국어 점수 입력 : ");
	scanf("%d", &korea);
	printf("수학 점수 입력 : ");
	scanf("%d", &math);
	printf("영어 점수 입력 : ");
	scanf("%d", &english);
	
	int sum, avg ;
	sum = korea + math + english;
	avg = (korea + math + english)/3;
	
	printf("국어: %d점, 수학 : %d점, 영어: %d점\n", korea, math, english);
	printf("총점: %d\n", sum);
	printf("평균: %d\n", avg);
	
	if(avg >= 90)
		printf("등급: A");
	else if (avg >= 80)
		printf("등급: B");
	else if (avg >= 70)
		printf("등급: C");
	else if (avg >= 60)
		printf("등급: D");
	else
		printf("등급: F");
	
	return 0;
}

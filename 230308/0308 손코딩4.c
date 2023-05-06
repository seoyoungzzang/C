#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//손코딩4 

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
	
	char grade; 
	
	switch(avg/10) 
	{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	} 
	
	printf("국어: %d점, 수학 : %d점, 영어: %d점\n", korea, math, english);
	printf("총점: %d\n", sum);
	printf("평균: %d\n", avg);
	printf("등급: %c", grade);
	
	return 0;
}

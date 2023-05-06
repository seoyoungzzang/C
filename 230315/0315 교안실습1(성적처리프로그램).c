#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int subject, student;
	printf("과목 수 입력: "); scanf("%d", &subject);
	printf("학생 수 입력: "); scanf("%d", &student);
	
	int score[student][subject];
	int sum_student[100] = {0}; //각 학생별 총점 저장 
	int avg_student[100] = {0}; //각 학생별 평균 저장 
	int total_subject[100] = {0}; //각 과목별 총점 저장 
	int avg_subject[100] = {0}; //각 과목별 평균 저장
	char*sub[100] = {"", "C언어", "자바", "리눅스"};
	
	int i, j;
	
	for (i = 0; i < student; i++){ //학생별 점수 입력하는 for문  
		printf("Koposw%d 학생의 점수%d개를 차례대로 입력하세요.: ", i+1, subject);
		for (j = 0; j < subject; j++){
			scanf("%d", &score[i][j]); 
			sum_student[i] = sum_student[i] + score[i][j]; // i번 학생의 총점 계산
            total_subject[j] = total_subject[j] + score[i][j]; // j번 과목의 총점 계산
        }
        avg_student[i] = sum_student[i] / subject; // i번 학생의 평균 계산
    }

	for (j = 0; j < subject; j++){
		avg_subject[j] = total_subject[j] / student; //j번 과목의 평균 계산
	}
	
	for (i = 0; i < student; i++){
		printf("Koposw%d 학생의 과목 총점은 %d점, 평균은 %d점 입니다. \n", i+1, sum_student[i], avg_student[i]);
	}
	printf("\n");

	for (j = 0; j < subject; j++){
		printf("%s 전체평균: %d점\n", sub[j+1], avg_subject[j]);
	}
	printf("\n");
			
	
	return 0;
}

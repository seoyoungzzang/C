#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int subject, student;
	printf("���� �� �Է�: "); scanf("%d", &subject);
	printf("�л� �� �Է�: "); scanf("%d", &student);
	
	int score[student][subject];
	int sum_student[100] = {0}; //�� �л��� ���� ���� 
	int avg_student[100] = {0}; //�� �л��� ��� ���� 
	int total_subject[100] = {0}; //�� ���� ���� ���� 
	int avg_subject[100] = {0}; //�� ���� ��� ����
	char*sub[100] = {"", "C���", "�ڹ�", "������"};
	
	int i, j;
	
	for (i = 0; i < student; i++){ //�л��� ���� �Է��ϴ� for��  
		printf("Koposw%d �л��� ����%d���� ���ʴ�� �Է��ϼ���.: ", i+1, subject);
		for (j = 0; j < subject; j++){
			scanf("%d", &score[i][j]); 
			sum_student[i] = sum_student[i] + score[i][j]; // i�� �л��� ���� ���
            total_subject[j] = total_subject[j] + score[i][j]; // j�� ������ ���� ���
        }
        avg_student[i] = sum_student[i] / subject; // i�� �л��� ��� ���
    }

	for (j = 0; j < subject; j++){
		avg_subject[j] = total_subject[j] / student; //j�� ������ ��� ���
	}
	
	for (i = 0; i < student; i++){
		printf("Koposw%d �л��� ���� ������ %d��, ����� %d�� �Դϴ�. \n", i+1, sum_student[i], avg_student[i]);
	}
	printf("\n");

	for (j = 0; j < subject; j++){
		printf("%s ��ü���: %d��\n", sub[j+1], avg_subject[j]);
	}
	printf("\n");
			
	
	return 0;
}

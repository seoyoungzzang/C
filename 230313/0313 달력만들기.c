#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main ()
{	
	int days; //�Ѵ޿� �� �������� 
	int month; //�Է��� ��  
	int year; //�Է��� �� 
	int totalDays; //1900�� �������� �Է� �������� �� ��������  
	int end; //������ ������ ���� �ݺ��Ұ��� 
	
	//while�� �޷������ �ݺ��Ұ��� �����Ұ��� 
	while(1){
	
	printf("�⵵ �Է� : ");scanf("%d", &year);
	printf("�� �Է� : ");scanf("%d", &month);printf("\n");	
	
	//�� ���� �� ���ϱ��� �ִ���  
	if (month==1) days=31;
	if (month==2){
		if ((year % 4 == 0) && (year % 100 != 0) || (year%400 == 0)) days = 29;	
		else days = 28;
	}	
	if (month==3) days=31;
	if (month==4) days=30;
	if (month==5) days=31;
	if (month==6) days=31;
	if (month==7) days=30;
	if (month==8) days=31;
	if (month==9) days=30;
	if (month==10) days=31;
	if (month==11) days=30;
	if (month==12) days=31;
				
	//�Է� ������ ������������ �� �ϼ� ���ϱ� 
	totalDays=0; //0���� �ʱ�ȭ
	 	
	for (int p = 1900; p < year; p++){
		if ((p % 4 == 0) && (p % 100 != 0) ||( p%400 == 0)) totalDays = totalDays + 366 ;
		else totalDays = totalDays + 365;
		}	
	
	//���ؿ�(1900)���� �Է� ���� ���������� �� �ϼ� ���ϱ� 
	for (int j = 1; j < month; j++){	
		if (j==1) totalDays = totalDays + 31;
		if (j==2){
			if ((year % 4 == 0) && (year % 100 != 0) || (year%400 == 0)) totalDays = totalDays + 29;	
			else totalDays = totalDays + 28;
			}	
		if (j==3) totalDays = totalDays + 31;
		if (j==4) totalDays = totalDays + 30;
		if (j==5) totalDays = totalDays + 31;
		if (j==6) totalDays = totalDays + 31;
		if (j==7) totalDays = totalDays + 30;
		if (j==8) totalDays = totalDays + 31;
		if (j==9) totalDays = totalDays + 30;
		if (j==10) totalDays = totalDays + 31;
		if (j==11) totalDays = totalDays + 30;
		}
		
	//printf("%d", totalDays);

	printf("======= %d�� %d�� =========",year,month); printf("\n");
	printf("��\t��\tȭ\t��\t��\t��\t��\n");
	
	//�Է¿��� ���ۿ��� ���ϱ� (�Է� ������ ���������� ���ϼ����� 7�� ������ �Է¿��� ���ۿ����� �� �� �ְԵ�)
	int first_day;
	first_day = totalDays % 7;
	
	//���� for�� ������ �� ������ ������ִ� �ݺ���. ���� first_day = 6�̸� �Ͽ����ε�, ���� �� �ʿ䰡 �����ϱ� break �ɾ��� 
	for (int i = 0; i <= first_day; i++){
		if (first_day == 6)
			break;
		printf("\t");
	}
	
	//��¥�� ����ϸ鼭 �ٹٲ� �ϴ� �κ�.   
	for (int d = 1; d <= days; d++){
		printf("%d\t", d); 					//��¥���� ���� �������� ������ ���������� 
		if (first_day + d % 7 == 6)			//������ ���� �ٹٲ��ϴ� ���� 
			printf("\n");					
	} 
	
	//������ �������ϱ� ������ ���� �ʱ�ȭ���Ѿ���  
	first_day = 0;
	totalDays = 0;
	
	printf("\n�����Ͻðڽ��ϱ�?(1:��, 2:�ƴϿ�)");
	scanf("%d", &end);
		if (end == 1)
		break;
	}
	
	return 0;
}

#include <stdio.h>
#include <time.h> 
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	long long inputId;
	int inputYear, inputMonth, inputDay;
	int age, flag;
	
	printf("�ֹε�Ϲ�ȣ�� �Է��ϼ���: ");
	scanf("%lld", &inputId);
	
	//���� �ð� ���ϱ� 
 	time_t t = time(NULL);  
 	//���� ����, ��, �� ���ϱ� 
    struct tm *now = localtime(&t);  
    int todayYear = now->tm_year + 1900;  
    int todayMonth = now->tm_mon + 1;  
    int todayDay = now->tm_mday;  	
	
		inputYear = inputId / 100000000000;
		inputId = inputId - (inputYear*100000000000);
		inputMonth = inputId / 1000000000;
		inputId = (long long)(inputId - (long long)inputMonth*1000000000);
		inputDay = inputId / 10000000;
		inputId = (long long)(inputId - (long long)inputDay*10000000);
		flag = inputId / 1000000;
		
		printf("%d %d %d %d\n", inputYear, inputMonth, inputDay, flag);
		
	switch(flag)
	{
		case 1:
		case 2:
			inputYear = inputYear + 1900;
			break;
		
		case 3:
		case 4:
			inputYear = inputYear + 2000;
			break;
		
		default:
			break;
	}
	
	age = todayYear - inputYear;
	
	if (inputMonth > todayMonth)
		age = age - 1;
	else if (inputMonth == todayMonth && inputDay > todayDay)
		age = age - 1;
	
	printf("�� ���� : %d", age);
	
	return 0; 
 } 

#include <stdio.h>
#include <time.h> 
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int choice, number, discount, price;
	long long inputID;
	
	printf("권종을 선택하세요.\n 1. 1Day\n 2. After4");
	scanf("%d", &choice);
	
	if(choice!=1 && choice!=2) printf("유효한 값을 입력하세요.");
	else
		{
			printf("주민번호를 입력하세요.\n");
			scanf("%lld", &inputID);
			
			int inputYear, inputMonth, inputDay;
			int age, flag;
			//현재 시간 구하기 
 			time_t t = time(NULL);  
 			//현재 연도, 월, 일 구하기 
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
	
			printf("만 나이 : %d", age);		
			
			if (age >= 19)
				{
				if(choice==1) price = 59000;
				if(choice==2) price = 47000;
				}
			else if (age >= 13)
				{
				if(choice==1) price = 52000;
				if(choice==2) price = 41000;		
				}
			else if (age >= 2)
				{
				if(choice==1) price = 46000;
				if(choice==2) price = 35000;		
				}									
			else if (age == 1 && age == 0)
				price = 15000;
				
		}
	
		
	
	
	
	
	
}

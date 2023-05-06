#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main ()
{	
	int days; //한달에 총 몇일인지 
	int month; //입력한 월  
	int year; //입력한 년 
	int totalDays; //1900을 기준으로 입력 연월까지 총 몇일인지  
	int end; //루프를 종료할 건지 반복할건지 
	
	//while은 달력출력을 반복할건지 종료할건지 
	while(1){
	
	printf("년도 입력 : ");scanf("%d", &year);
	printf("월 입력 : ");scanf("%d", &month);printf("\n");	
	
	//각 월이 총 몇일까지 있는지  
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
				
	//입력 연도의 전연도까지의 총 일수 구하기 
	totalDays=0; //0으로 초기화
	 	
	for (int p = 1900; p < year; p++){
		if ((p % 4 == 0) && (p % 100 != 0) ||( p%400 == 0)) totalDays = totalDays + 366 ;
		else totalDays = totalDays + 365;
		}	
	
	//기준월(1900)부터 입력 월의 전월까지의 총 일수 구하기 
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

	printf("======= %d년 %d월 =========",year,month); printf("\n");
	printf("일\t월\t화\t수\t목\t금\t토\n");
	
	//입력월의 시작요일 정하기 (입력 연도의 전월까지의 총일수에서 7을 나누면 입력월의 시작요일을 알 수 있게됨)
	int first_day;
	first_day = totalDays % 7;
	
	//여기 for는 시작일 전 공백을 만들어주는 반복문. 만약 first_day = 6이면 일요일인데, 탭을 할 필요가 없으니깐 break 걸어줌 
	for (int i = 0; i <= first_day; i++){
		if (first_day == 6)
			break;
		printf("\t");
	}
	
	//날짜를 출력하면서 줄바꿈 하는 부분.   
	for (int d = 1; d <= days; d++){
		printf("%d\t", d); 					//날짜마다 탭을 기준으로 간격이 떨어져있음 
		if (first_day + d % 7 == 6)			//일주일 마다 줄바꿈하는 조건 
			printf("\n");					
	} 
	
	//루프를 돌려야하기 때문에 값을 초기화시켜야함  
	first_day = 0;
	totalDays = 0;
	
	printf("\n종료하시겠습니까?(1:예, 2:아니오)");
	scanf("%d", &end);
		if (end == 1)
		break;
	}
	
	return 0;
}

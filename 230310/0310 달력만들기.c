#include <stdio.h>
int main ()
{
	int days, totalDays;
	int year, month;
	if ( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		days = 28;
	else if ( month == 1 || month == 3 || month == 5 || month == 6 || month == 8 || month == 10 || month == 12 )
		days = 31;
	else if ( month == 4 || month == 7 || month == 9 || month == 11 )
		days = 30;
	else
		days = 29;		
		
	/*printf("%d",days);*/
	

	printf("년도 입력 : ");scanf("%d", &year);
	printf("월 입력 : ");scanf("%d", &month);printf("\n");
	printf("======= %d년 %d월 =========",year,month); printf("\n");
	printf(" 일  월  화  수  목  금  토");
	
	//해당 월의 총 일수 구하는 법 
	if ( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		totalDays = totalDays + 366 ;
	else
		totalDays = totalDays + 365;
	
	//1일의 요일 계산하는 법
	int first_day;
	first_day = (totalDays - 1) % 7;
	printf("%d", first_day);
	
	switch(first_day) //0부터 일요일 6일은 토요일 
		case 0:
			printf
	
	
	return 0;
}

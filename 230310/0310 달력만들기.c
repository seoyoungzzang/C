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
	

	printf("�⵵ �Է� : ");scanf("%d", &year);
	printf("�� �Է� : ");scanf("%d", &month);printf("\n");
	printf("======= %d�� %d�� =========",year,month); printf("\n");
	printf(" ��  ��  ȭ  ��  ��  ��  ��");
	
	//�ش� ���� �� �ϼ� ���ϴ� �� 
	if ( (year % 4 == 0) && (year % 100 != 0) || (year%400 == 0) )
		totalDays = totalDays + 366 ;
	else
		totalDays = totalDays + 365;
	
	//1���� ���� ����ϴ� ��
	int first_day;
	first_day = (totalDays - 1) % 7;
	printf("%d", first_day);
	
	switch(first_day) //0���� �Ͽ��� 6���� ����� 
		case 0:
			printf
	
	
	return 0;
}

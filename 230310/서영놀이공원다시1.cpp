#include <stdio.h>
#include <time.h> 
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int choice, ticketNum, discount, price, end ;
	long long inputId;
	int inputYear, inputMonth, inputDay;
	int age, flag;
	
	const int BABY_PRICE = 0;
	const int ADULT_DAY_PRICE = 56000, ADULT_NIGHT_PRICE = 46000;
	const int TEEN_DAY_PRICE = 47000, TEEN_NIGHT_PRICE = 40000;
	const int CHILD_DAY_PRICE = 44000, CHILD_NIGHT_PRICE = 37000;
	const int OLD_DAY_PRICE = 44000, OLD_NIGHT_PRICE = 37000;
				
	while(1)
	{	
		printf("������ �����ϼ���.\n 1. �ְ���\n 2. �߰���\n");
		scanf("%d", &choice);
	
		if (choice == 1 || choice == 2) 
			break;
			
		else
			printf("��ȿ���� �Է��ϼ���.\n");
	}
	
		while(1)
	{
		printf("�ֹι�ȣ�� �Է��ϼ���.\n");
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
		
		//printf("%d %d %d %d\n", inputYear, inputMonth, inputDay, flag);	
	
			

		
	if(
           (999999999999 < inputId && inputId < 10000000000000)
           &&
           (1 <= inputMonth && inputMonth <= 12)
           &&
           (1 <= inputDay && inputDay <= 31)
           &&
           (flag == 1 || flag == 2 || flag == 3 || flag == 4)
           )
         break;
		
		else
			printf("��ȿ���� �Է��ϼ���.\n");
	}
		
		
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
	
		//printf("�� ���� : %d\n", age);	

	
		if (age >= 65)
		{ 
			if(choice == 1) price = OLD_DAY_PRICE;
			if(choice == 2) price = OLD_NIGHT_PRICE;
		}
		else if (age>=19)
		{	
			if(choice == 1) price = ADULT_DAY_PRICE;
			if(choice == 2) price = ADULT_NIGHT_PRICE;	
		}
		else if (age>=13)
		{	
			if(choice == 1) price = TEEN_DAY_PRICE;
			if(choice == 2) price = TEEN_NIGHT_PRICE;	
		}
		else if (age>=3)
		{	
			if(choice == 1) price = CHILD_DAY_PRICE;
			if(choice == 2) price = CHILD_NIGHT_PRICE;	
		}		
		else if (age<=2)
			price = BABY_PRICE;
	
	
	
	while(1)
	{
		printf("��� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
		scanf("%d", &ticketNum);
	
		if (ticketNum >= 1  && ticketNum <11)
			{(price = price * ticketNum); 
			break;}
		
		else
			printf("��ȿ���� �Է��ϼ���.");
	}

	while(1)
	{
		printf("�������� �����ϼ���.\n 1. ���� (���� ���� �ڵ�ó��)\n 2. �����\n 3. ����������\n 4. ���ڳ�\n 5. �ӻ��\n");
		scanf("%d", &discount);
		
		if (discount > 6 || discount == 0 ) printf("��ȿ���� �Է��ϼ���.");
		else if (discount == 1) {price = price * 1;break;}
		else if	(discount == 2) {price = price * 0.6;break;}
		else if (discount == 3) {price = price * 0.5;break;}
		else if	(discount == 4) {price = price * 0.85;break;}
	}
	
	printf("������ %d �� �Դϴ�.\n�����մϴ�.", price);
	
	
	return 0;
	}

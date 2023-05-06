#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
   int ticket;
   long long  idNum;
   int ticketNum, price;
   int discount;
   long long birthYear, birthMonth, birthDay;
   long long todayYear, todayMonth, todayDay;
   int age;
   int flag;
   
   const int BABY_PRICE = 0;
   const int ADULT_DAY_PRICE = 56000, ADULT_NIGHT_PRICE = 46000;
   const int TEEN_DAY_PRICE = 47000, TEEN_NIGHT_PRICE = 40000;
   const int CHILD_DAY_PRICE = 44000, CHILD_NIGHT_PRICE = 37000;
   const int OLD_DAY_PRICE = 44000, OLD_NIGHT_PRICE = 37000;
   
   
   
   while (true)
   	{
   		printf("������ �����ϼ���. (1. �ְ���, 2. �߰���)\n"); // ���� ����  
   		scanf("%d", &ticket);
   	
   		if (ticket == 1 || ticket == 2)
   			break;
   		
		else 
   			printf("�ٽ� �Է��ϼ���.\n");
   
	}

    
    while (true)
	{
		printf("�ֹι�ȣ�� �Է��ϼ���.(-���� �Է�)\n"); // �ֹι�ȣ ����
	  	scanf("%lld", &idNum);
         
    	// ���� ��¥ ���� ����
    	time_t t = time(NULL);  
    	struct tm *now = localtime(&t);  
    	todayYear = now->tm_year + 1900;  
    	todayMonth = now->tm_mon + 1;  
    	todayDay = now->tm_mday;  
    
   		// ������� ���� 
   		birthYear = idNum / 100000000000; //11�������� 
    	birthMonth = (idNum / 1000000000) % 100; // 9�� ������ 
    	birthDay = (idNum / 10000000) % 100; //7
    	flag = (idNum / 1000000) % 10;
    
    	//���� ����ϱ� 
   		age = (todayYear - birthYear) % 100;
   
   		//printf("����� ���̴� %d���Դϴ�.\n", age);
   
   		if(
           (999999999999 < idNum && idNum < 10000000000000)
           &&
           (1 <= birthMonth && birthMonth <= 12)
           &&
           (1 <= birthDay && birthDay <= 31)
           &&
           (flag == 1 || flag == 2 || flag == 3 || flag == 4)
           )
         	break;
          
        else 
			printf("�ٽ� �Է��ϼ���\n");   
	}
    

	if (age >= 65)
		{ 
			if(ticket == 1) price = OLD_DAY_PRICE;
			if(ticket == 2) price = OLD_NIGHT_PRICE;
		}
		else if (age>=19)
		{	
			if(ticket == 1) price = ADULT_DAY_PRICE;
			if(ticket == 2) price = ADULT_NIGHT_PRICE;	
		}
		else if (age>=13)
		{	
			if(ticket == 1) price = TEEN_DAY_PRICE;
			if(ticket == 2) price = TEEN_NIGHT_PRICE;	
		}
		else if (age>=3)
		{	
			if(ticket == 1) price = CHILD_DAY_PRICE;
			if(ticket == 2) price = CHILD_NIGHT_PRICE;	
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
		else if	(discount == 4) {price = price * 0.8;break;}
		else if	(discount == 5) {price = price * 0.85;break;}
	}
	
	printf("������ %d �� �Դϴ�.\n�����մϴ�.", price);
	
	
	return 0;
	}

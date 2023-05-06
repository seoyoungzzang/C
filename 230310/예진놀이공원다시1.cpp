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
   		printf("권종을 선택하세요. (1. 주간권, 2. 야간권)\n"); // 권종 선택  
   		scanf("%d", &ticket);
   	
   		if (ticket == 1 || ticket == 2)
   			break;
   		
		else 
   			printf("다시 입력하세요.\n");
   
	}

    
    while (true)
	{
		printf("주민번호를 입력하세요.(-없이 입력)\n"); // 주민번호 선택
	  	scanf("%lld", &idNum);
         
    	// 현재 날짜 정보 추출
    	time_t t = time(NULL);  
    	struct tm *now = localtime(&t);  
    	todayYear = now->tm_year + 1900;  
    	todayMonth = now->tm_mon + 1;  
    	todayDay = now->tm_mday;  
    
   		// 생년월일 추출 
   		birthYear = idNum / 100000000000; //11개버리고 
    	birthMonth = (idNum / 1000000000) % 100; // 9개 버리고 
    	birthDay = (idNum / 10000000) % 100; //7
    	flag = (idNum / 1000000) % 10;
    
    	//나이 계산하기 
   		age = (todayYear - birthYear) % 100;
   
   		//printf("당신의 나이는 %d세입니다.\n", age);
   
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
			printf("다시 입력하세요\n");   
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
		printf("몇개를 주문하시겠습니까? (최대 10개)\n");
		scanf("%d", &ticketNum);
	
		if (ticketNum >= 1  && ticketNum <11)
			{(price = price * ticketNum); 
			break;}
		
		else
			printf("유효값을 입력하세요.");
	}

	while(1)
	{
		printf("우대사항을 선택하세요.\n 1. 없음 (나이 우대는 자동처리)\n 2. 장애인\n 3. 국가유공자\n 4. 다자녀\n 5. 임산부\n");
		scanf("%d", &discount);
		
		if (discount > 6 || discount == 0 ) printf("유효값을 입력하세요.");
		else if (discount == 1) {price = price * 1;break;}
		else if	(discount == 2) {price = price * 0.6;break;}
		else if (discount == 3) {price = price * 0.5;break;}
		else if	(discount == 4) {price = price * 0.8;break;}
		else if	(discount == 5) {price = price * 0.85;break;}
	}
	
	printf("가격은 %d 원 입니다.\n감사합니다.", price);
	
	
	return 0;
	}

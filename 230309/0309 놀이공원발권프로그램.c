#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int choice, ticketNum, discount, price ;
	long long ID;
	
	const int BABY_PRICE = 0;
	const int ADULT_DAY_PRICE = 56000, ADULT_NIGHT_PRICE = 46000;
	const int TEEN_DAY_PRICE = 47000, TEEN_NIGHT_PRICE = 40000;
	const int CHILD_DAY_PRICE = 44000, CHILD_NIGHT_PRICE = 37000;
	const int OLD_DAY_PRICE = 44000, OLD_NIGHT_PRICE = 37000;
				
	printf("권종을 선택하세요.\n 1. 주간권\n 2. 야간권\n");
	scanf("%d", &choice);

	if (choice != 1 && choice != 2) printf("유효값을 입력하세요.");
	
	else
	{	
		printf("주민번호를 입력하세요.\n");
		scanf("%lld", &ID);
	
		//windows.h 로 현재 나이 구하는 방법
	
		SYSTEMTIME now_time;
    	GetLocalTime(&now_time);
	
		int age, birthyear, nowyear=now_time.wYear;
		birthyear = ID/10000000000;
		age = ((nowyear-birthyear)%100) + 1; 
	
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
	
	printf("몇개를 주문하시겠습니까? (최대 10개)\n");
	scanf("%d", &ticketNum);
	
		if (ticketNum > 10 || ticketNum == 0) printf("유효값을 입력하세요.");
		else
			price = price * ticketNum; 
	
	printf("우대사항을 선택하세요.\n 1. 없음 (나이 우대는 자동처리)\n 2. 장애인\n 3. 국가유공자\n 4. 다자녀\n 5. 임산부\n");
	scanf("%d", &discount);
	
		if (discount > 6 || discount == 0 ) printf("유효값을 입력하세요.");
		else if (discount == 1) price = price * 1;
		else if	(discount == 2) price = price * 0.6;
		else if (discount == 3) price = price * 0.5;
		else if	(discount == 4) price = price * 0.85;
	
	printf("가격은 %d 원 입니다.\n감사합니다.", price);
	
	}
	return 0;
}

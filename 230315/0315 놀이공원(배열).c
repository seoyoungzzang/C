#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h> // 문자열 처리 함수를 사용하기 위한 헤더 파일

int main()
{
	int ticket, ticketNum, price, discount;
	long long  idNum;
	int birthYear, birthMonth, birthDay;
	int todayYear, todayMonth, todayDay;
	int age, flag, end;
	
	const int BABY_DAY_PRICE = 0, BABY_NIGHT_PRICE = 0;
	const int ADULT_DAY_PRICE = 56000, ADULT_NIGHT_PRICE = 46000;
	const int TEEN_DAY_PRICE = 47000, TEEN_NIGHT_PRICE = 40000;
	const int CHILD_DAY_PRICE = 44000, CHILD_NIGHT_PRICE = 37000;
	const int OLD_DAY_PRICE = 44000, OLD_NIGHT_PRICE = 37000;	

	int totalOrderCount = 0;
	int ticketList[10];
	char* ticketName[20] = {"주간권", "야간권"};
	int ageList[10];
	char* ageName[20] = {"노인", "어른", "청소년", "어린이", "영유아" };
	int numList[10];
	int discountList[10];
	char* discountName[20] = {"*우대적용없음", "*장애인우대적용", "*국가유공자우대적용", "*다자녀우대적용", "*임산부우대적용"}; 
	int priceList[10];
	
	while(1){ //전체 주문 반복 
		
		//권종 선택
		while (1){ //권종 선택 반복
		printf("권종을 선택하세요. (1. 주간권, 2. 야간권)\n");
		scanf("%d", &ticket);  
	
   		if (ticket == 1 || ticket == 2)
   			break;
		else 
   			printf("다시 입력하세요.\n");
		}
	
		ticketList[totalOrderCount] = ticket;
		if (ticket == 1) ticketName[0];
		else ticketName[1];
		
		//주민번호 입력
		while (1){ //주민번호 입력 반복 	
		printf("주민번호를 입력하세요.(-없이 입력)\n");
		scanf("%lld", &idNum);
		
		//현재 날짜 정보 추출
		time_t t = time(NULL);
		struct tm *now = localtime(&t);
		todayYear = now->tm_year + 1900;
		todayMonth = now->tm_mon + 1;
		todayDay = now->tm_mday;
		
		//생년월일 추출
		birthYear = idNum / 100000000000; //11개버리고
		birthMonth = (idNum / 1000000000) % 100; // 9개 버리고
		birthDay = (idNum / 10000000) % 100; //7
		flag = (idNum / 1000000) % 10;
		
		//flag 이용해서 출생연도 계산하기 
		if (flag == 1 || flag == 2){
			birthYear += 1900;
		} 
		else if (flag == 3 || flag == 4){
			birthYear += 2000;
		}
		else{
			printf("다시 입력하세요. flag는 1,2,3,4만 가능합니다.\n");
			continue;
		}
      	
	  
       	age = todayYear - birthYear;
       	if ((birthMonth > todayMonth)||(birthMonth == todayMonth && birthDay > todayDay))
			age--;

      	if ((birthYear % 4 == 0 && birthYear % 100 != 0) || birthYear % 400 == 0){ // 윤년인 경우 2월까지 29일 가능
        if (birthMonth == 2 && birthDay > 29){
            printf("다시 입력하세요. 29일까지입니다.\n");
            continue;
        }
      	} 
		else{ // 평년인 경우 2월까지 28일 가능
        if (birthMonth == 2 && birthDay > 28){
			printf("다시 입력하세요. 28일까지입니다.\n");
            continue;
        }
      	}
      	
		if (birthMonth == 4 || birthMonth == 6 || birthMonth == 9 || birthMonth == 11){
        if (birthDay > 30){
			printf("다시 입력하세요. 30일까지입니다.\n");
            continue;
        }
        }
      	if (birthMonth == 1 || birthMonth == 3 || birthMonth == 5 || birthMonth == 7 || birthMonth == 8 || birthMonth == 10 || birthMonth == 12){
        if (birthDay > 31){
			printf("다시 입력하세요. 31일까지입니다.\n");
			continue;
        }
    	}
    break;
   	}

		ageList[totalOrderCount] = age;
	
		//권종 및 나이대별 금액 
		if (age >= 65){ 
			if(ticket == 1) price = OLD_DAY_PRICE;
			if(ticket == 2) price = OLD_NIGHT_PRICE;
			}
		else if (age>=19){	
			if(ticket == 1) price = ADULT_DAY_PRICE;
			if(ticket == 2) price = ADULT_NIGHT_PRICE;	
			}
		else if (age>=13){	
			if(ticket == 1) price = TEEN_DAY_PRICE;
			if(ticket == 2) price = TEEN_NIGHT_PRICE;	
			}
		else if (age>=3){	
			if(ticket == 1) price = CHILD_DAY_PRICE;
			if(ticket == 2) price = CHILD_NIGHT_PRICE;	
			}		
		else if (age<=2){
			if(ticket == 1) price = BABY_DAY_PRICE;
			if(ticket == 2) price = BABY_NIGHT_PRICE;
			}
	
		if(ageList[totalOrderCount] >= 65) ageName[totalOrderCount] = "노인";
		else if (ageList[totalOrderCount]>=19) ageName[totalOrderCount] = "어른";
		else if (ageList[totalOrderCount]>=13) ageName[totalOrderCount] = "청소년";
		else if (ageList[totalOrderCount]>=3) ageName[totalOrderCount] = "어린이";
		else if (ageList[totalOrderCount]<=2) ageName[totalOrderCount] = "영유아";
	
		//티켓 개수 입력
		while (1){ //티켓 개수 입력 반복 
		printf("몇개를 주문하시겠습니까? (최대 10개)\n"); 
		scanf("%d", &ticketNum);
		  
		if (ticketNum >= 1  && ticketNum <11){
			(price = price * ticketNum); 
			break;
			}	
		else
			printf("다시 입력하세요.\n");				
		} 
		
		numList[totalOrderCount] = ticketNum;
		
		//우대사항 선택
		while (1){ //우대사항 선택 반복
		printf("우대사항을 선택하세요.\n 1. 없음 (나이 우대는 자동처리)\n 2. 장애인\n 3. 국가유공자\n 4. 다자녀\n 5. 임산부\n"); 
		scanf("%d", &discount);
			  
		if (discount > 6 || discount == 0 ) printf("유효값을 입력하세요.");	
		else if (discount == 1) {price = price * 1; break;}	
		else if	(discount == 2) {price = price * 0.6; break;}	
		else if (discount == 3) {price = price * 0.5; break;}
		else if	(discount == 4) {price = price * 0.8; break;}
		else if	(discount == 5) {price = price * 0.85; break;}	
		}

		discountList[totalOrderCount] = discount;		
	
		if (discountList[totalOrderCount] == 1) discountName[totalOrderCount] = "*우대적용없음";
		if (discountList[totalOrderCount] == 2) discountName[totalOrderCount] = "*장애인우대적용";
		if (discountList[totalOrderCount] == 3) discountName[totalOrderCount] = "*국가유공자우대적용";
		if (discountList[totalOrderCount] == 4) discountName[totalOrderCount] = "*다자녀우대적용";
		if (discountList[totalOrderCount] == 5) discountName[totalOrderCount] = "*임산부우대적용";
		
		printf("가격은 %d 원 입니다.\n감사합니다.", price);
		
		priceList[totalOrderCount] = price;
		
		totalOrderCount ++;
		
		int addOrder; //주문 추가 변수
		
		//추가 주문 선택  
		while (1){ //주문 추가 반복
		printf("추가 주문 하시겠습니까?\n 1. 네, 2. 아니오");
		scanf("%d", &addOrder);
		  
		if (addOrder == 1 || addOrder == 2)
			break;
		else
			printf("다시 입력하세요.\n");		
		}
		if (addOrder == 2)
			break;
	}

	printf("===================놀이공원==================\n\n");
	
	int sum = 0;
	
	for (int i = 0; i < totalOrderCount; i++){
		printf("%5s %5s x %3d %10d원 %10s\n", ticketName[i], ageName[i], numList[i], priceList[i], discountName[i]);
		sum += priceList[i];
		printf("\n");
		}
		
	printf("\n입장료 총액은 %d원입니다.\n\n=============================================\n", sum);
		

return 0;	
}

#include <stdio.h>
#include <time.h>
#include <string.h>
 
int main()
{
   //권종별 가격에 대한 정보를 상수로 지정
   const int DAY_ELDERLY_PRICE = 44000, DAY_INFANT_PRICE = 0, DAY_CHILD_PRICE = 44000, DAY_TEENAGER_PRICE = 47000, DAY_ADULT_PRICE = 56000;
   const int NIGHT_ELDERLY_PRICE = 37000, NIGHT_INFANT_PRICE = 0, NIGHT_CHILD_PRICE = 37000, NIGHT_TEENAGER_PRICE = 40000, NIGHT_ADULT_PRICE = 46000;
   
   long long int IdNum, birthYear, birthMonth, birthDay;
   int tixType, age, price, discountOPT, amount;
   float discountRate;
   
   
   while(1)
   {    //주민번호  
      printf("주민번호를 입력하세요. : ");
      scanf("%lld", &IdNum);
      
       if (999999999999 < IdNum && IdNum < 10000000000000)
           break;
      else 
         printf("잘못된 주민번호입니다. 다시 입력하세요.\n");
   }
       
   while(1)
   {   //티켓수량
      printf("몇 개를 주문하시겠습니까? (최대 10매)\n", amount);
      scanf("%d", &amount);
      
      if (amount <= 10)
         break;
      else
         printf("10매를 초과할 수 없습니다. 다시 입력하세요.");
   }
   

   //권종 선택
      
   while(1)
   {   
      printf("권종을 선택하세요 : \n 1.주간권\n 2.야간권: \n");
      scanf("%d", &tixType);
      
      if (1<=tixType && tixType<=2)
         break;
      
      else printf("권종을 잘못 입력하였습니다. 다시 입력하세요");
   }
      if (tixType==1)
         {
            if (age <= 2)
               price = DAY_INFANT_PRICE;
            else if (age<=12)
               price = DAY_CHILD_PRICE;
            else if (age<=18)
               price = DAY_TEENAGER_PRICE;
            else if (age<=64)
               price = DAY_ADULT_PRICE;
            else
               price = DAY_ELDERLY_PRICE;      
         }
   
         
      else if (tixType==2)
         {
            if (age <= 2)
               price = NIGHT_INFANT_PRICE;
            else if (age<=12)
               price = NIGHT_CHILD_PRICE;
            else if (age<=18)
               price = NIGHT_TEENAGER_PRICE;
            else if (age<=64)
               price = NIGHT_ADULT_PRICE;
            else
               price = NIGHT_ELDERLY_PRICE;
         }
   
       
    
   

      //나이 계산하기
      time_t today = time(NULL);  //step1. 오늘 날짜와 현재 시각을 초 단위로 불러오기 
      struct tm tm = *localtime(&today);  //반환된 stuct tm 구조체를 tm 변수에 복사. tm변수의 필드를 이용하여 원하는 형식으로 시간을 활용할 수 있음 
      printf("오늘 날짜는 %d년 %d월 %d일입니다.\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday); //tm_mon은 0부터 시작하는 월을 저장. 
      birthYear = (int)(IdNum/100000000000);
       age = (tm. tm_year + 1900 - birthYear) % 100;  //tm_year는 현재년도-1900을 한 값. 인간에게 보여주기 위해 다시 +1900 한 다음 앞에 숫자 두개 버리면 뒤에 숫자 두개가 만 나이. 

   
   


   while(1)
   {
   printf("우대사항을 선택하세요. \n 1. 없음(나이 우대는 자동처리) \n 2. 장애인 \n 3. 국가유공자 \n 4. 다자녀 \n 5. 임산부\n");
   scanf("%d", &discountOPT);
   if (1 <= discountOPT && discountOPT <= 5)
      break; 
   else 
      printf("다시 입력하세요.");
   }
      switch (discountOPT)
      {
         case 1 : 
         discountRate = 1;
         break;
         
         case 2 :
         discountRate = 0.6;
         break;
      
         case 3 :
         discountRate = 0.5;
         break;
         
         case 4 :
         discountRate = 0.8;
         break;
         
         case 5 :
         discountRate = 0.85;
         break;
      }   
      
        
    birthYear = (IdNum / 100000000000); //11개버리고 
    birthMonth = (IdNum / 1000000000) % 100; // 9개 버리고 
    birthDay = (IdNum / 10000000) % 100;

    printf("%lld %lld %lld", birthYear, birthMonth, birthDay);
   printf("가격은 %lld원 입니다. 감사합니다.", (int)((float)price * (float)amount *discountRate));
   
   return 0;
}

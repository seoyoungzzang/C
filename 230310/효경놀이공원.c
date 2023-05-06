#include <stdio.h>
#include <time.h>
#include <string.h>
 
int main()
{
   //������ ���ݿ� ���� ������ ����� ����
   const int DAY_ELDERLY_PRICE = 44000, DAY_INFANT_PRICE = 0, DAY_CHILD_PRICE = 44000, DAY_TEENAGER_PRICE = 47000, DAY_ADULT_PRICE = 56000;
   const int NIGHT_ELDERLY_PRICE = 37000, NIGHT_INFANT_PRICE = 0, NIGHT_CHILD_PRICE = 37000, NIGHT_TEENAGER_PRICE = 40000, NIGHT_ADULT_PRICE = 46000;
   
   long long int IdNum, birthYear, birthMonth, birthDay;
   int tixType, age, price, discountOPT, amount;
   float discountRate;
   
   
   while(1)
   {    //�ֹι�ȣ  
      printf("�ֹι�ȣ�� �Է��ϼ���. : ");
      scanf("%lld", &IdNum);
      
       if (999999999999 < IdNum && IdNum < 10000000000000)
           break;
      else 
         printf("�߸��� �ֹι�ȣ�Դϴ�. �ٽ� �Է��ϼ���.\n");
   }
       
   while(1)
   {   //Ƽ�ϼ���
      printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n", amount);
      scanf("%d", &amount);
      
      if (amount <= 10)
         break;
      else
         printf("10�Ÿ� �ʰ��� �� �����ϴ�. �ٽ� �Է��ϼ���.");
   }
   

   //���� ����
      
   while(1)
   {   
      printf("������ �����ϼ��� : \n 1.�ְ���\n 2.�߰���: \n");
      scanf("%d", &tixType);
      
      if (1<=tixType && tixType<=2)
         break;
      
      else printf("������ �߸� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���");
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
   
       
    
   

      //���� ����ϱ�
      time_t today = time(NULL);  //step1. ���� ��¥�� ���� �ð��� �� ������ �ҷ����� 
      struct tm tm = *localtime(&today);  //��ȯ�� stuct tm ����ü�� tm ������ ����. tm������ �ʵ带 �̿��Ͽ� ���ϴ� �������� �ð��� Ȱ���� �� ���� 
      printf("���� ��¥�� %d�� %d�� %d���Դϴ�.\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday); //tm_mon�� 0���� �����ϴ� ���� ����. 
      birthYear = (int)(IdNum/100000000000);
       age = (tm. tm_year + 1900 - birthYear) % 100;  //tm_year�� ����⵵-1900�� �� ��. �ΰ����� �����ֱ� ���� �ٽ� +1900 �� ���� �տ� ���� �ΰ� ������ �ڿ� ���� �ΰ��� �� ����. 

   
   


   while(1)
   {
   printf("�������� �����ϼ���. \n 1. ����(���� ���� �ڵ�ó��) \n 2. ����� \n 3. ���������� \n 4. ���ڳ� \n 5. �ӻ��\n");
   scanf("%d", &discountOPT);
   if (1 <= discountOPT && discountOPT <= 5)
      break; 
   else 
      printf("�ٽ� �Է��ϼ���.");
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
      
        
    birthYear = (IdNum / 100000000000); //11�������� 
    birthMonth = (IdNum / 1000000000) % 100; // 9�� ������ 
    birthDay = (IdNum / 10000000) % 100;

    printf("%lld %lld %lld", birthYear, birthMonth, birthDay);
   printf("������ %lld�� �Դϴ�. �����մϴ�.", (int)((float)price * (float)amount *discountRate));
   
   return 0;
}

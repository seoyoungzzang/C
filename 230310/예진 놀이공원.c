#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
   int ticket;
   long long  idNum;
   int num;
   int special;
   long long birthYear, birthMonth, birthDay;
   long long todayYear, todayMonth, todayDay;
   int age;
   int flag;
   
   
   printf("������ �����ϼ���.\n"); // ���� ����  
   printf("1. �ְ���\n");
   printf("2. �߰���\n");
   while (1){
   scanf("%d", &ticket);
   
   if (ticket == 1 || ticket == 2){
   break;
   }
   else {
   printf("�ٽ� �Է��ϼ���.\n");
   }
}

   printf("�ֹι�ȣ�� �Է��ϼ���.(-���� �Է�)\n"); // �ֹι�ȣ ���� 
   
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
   
   
   while (1){
   scanf("%lld", &idNum);

   if (
      (idNum < 10000000000000 && idNum > 9999999999999)
      && (birthMonth >= 1 || birthMonth <= 12)
      && (birthDay >= 1 || birthDay <= 31)
      && (flag == 1 || flag == 2 || flag == 3 || flag == 4)   
   )
   break;   
      
   else {
   printf("�ٽ� �Է��ϼ���.\n");
   }   
}
    

   int dayA = 56000, dayT = 47000, dayS = 44000, dayG = 44000;
   int nightA = 46000, nightT = 40000, nightS = 37000, nightG = 37000;

   int price;
   
   if ( ticket == 1)
      if (age >= 19 && age <= 64 )
   {
      price = dayA;
   }
       else if (age <= 18 )
   {
      price = dayT;
   }
      else if (age <= 12 )
   {
      price = dayS;
   }
      else if (age >= 65 )
   {
      price = dayG;
   }
      else if (age <= 2 )
   {
      price = 0;
   }
   
   if ( ticket == 2)
      if (age >= 19 && age <= 64 )
   {
      price = nightA;
   }
       else if (age >= 13 && age <= 18 )
   {
      price = nightT;
   }
      else if (age >= 3 && age <= 12 )
   {
      price = nightS;
   }
      else if (age >= 65 )
   {
      price = nightG;
   }
      else if (age <= 2 )
   {
      price = 0;
   }

   printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
   while (1){
   scanf("%d", &num);
   
   if ( num >=1 && num <= 10) {
   break;
   }
   else {
   printf("�ٽ� �Է��ϼ���.\n");
   }   
}

   printf("��������  �����ϼ���.\n"); // ������ ���� 
   printf("1. ���� (���� ���� �ڵ�ó��)\n");
   printf("2. �����\n");
   printf("3. ����������\n");
   printf("4. ���ڳ�\n");
   printf("5. �ӻ��\n");
   while (1){
   scanf("%d", &special);   
   
   if ( special >=1 && special <= 5) {
   break;
   }
   else {
   printf("�ٽ� �Է��ϼ���.\n");
   }   
}

   float discount;
      
   if ( special == 1)
   {
      discount = 1;
   }
   if ( special == 2)
   {
      discount = 0.6;
   }
   if ( special == 3)
   {
      discount = 0.5;
   }
   if ( special == 4)
   {
      discount = 0.8;
   }
   if ( special == 5)
   {
      discount = 0.85;
   }
   
   float total;
   total = price * (float)(discount) * num;
   
   printf("������ %.0f�Դϴ�.", total );
     
     
return 0;   
}

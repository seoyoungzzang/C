#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h> // ���ڿ� ó�� �Լ��� ����ϱ� ���� ��� ����

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
	char* ticketName[20] = {"�ְ���", "�߰���"};
	int ageList[10];
	char* ageName[20] = {"����", "�", "û�ҳ�", "���", "������" };
	int numList[10];
	int discountList[10];
	char* discountName[20] = {"*����������", "*����ο������", "*���������ڿ������", "*���ڳ�������", "*�ӻ�ο������"}; 
	int priceList[10];
	
	while(1){ //��ü �ֹ� �ݺ� 
		
		//���� ����
		while (1){ //���� ���� �ݺ�
		printf("������ �����ϼ���. (1. �ְ���, 2. �߰���)\n");
		scanf("%d", &ticket);  
	
   		if (ticket == 1 || ticket == 2)
   			break;
		else 
   			printf("�ٽ� �Է��ϼ���.\n");
		}
	
		ticketList[totalOrderCount] = ticket;
		if (ticket == 1) ticketName[0];
		else ticketName[1];
		
		//�ֹι�ȣ �Է�
		while (1){ //�ֹι�ȣ �Է� �ݺ� 	
		printf("�ֹι�ȣ�� �Է��ϼ���.(-���� �Է�)\n");
		scanf("%lld", &idNum);
		
		//���� ��¥ ���� ����
		time_t t = time(NULL);
		struct tm *now = localtime(&t);
		todayYear = now->tm_year + 1900;
		todayMonth = now->tm_mon + 1;
		todayDay = now->tm_mday;
		
		//������� ����
		birthYear = idNum / 100000000000; //11��������
		birthMonth = (idNum / 1000000000) % 100; // 9�� ������
		birthDay = (idNum / 10000000) % 100; //7
		flag = (idNum / 1000000) % 10;
		
		//flag �̿��ؼ� ������� ����ϱ� 
		if (flag == 1 || flag == 2){
			birthYear += 1900;
		} 
		else if (flag == 3 || flag == 4){
			birthYear += 2000;
		}
		else{
			printf("�ٽ� �Է��ϼ���. flag�� 1,2,3,4�� �����մϴ�.\n");
			continue;
		}
      	
	  
       	age = todayYear - birthYear;
       	if ((birthMonth > todayMonth)||(birthMonth == todayMonth && birthDay > todayDay))
			age--;

      	if ((birthYear % 4 == 0 && birthYear % 100 != 0) || birthYear % 400 == 0){ // ������ ��� 2������ 29�� ����
        if (birthMonth == 2 && birthDay > 29){
            printf("�ٽ� �Է��ϼ���. 29�ϱ����Դϴ�.\n");
            continue;
        }
      	} 
		else{ // ����� ��� 2������ 28�� ����
        if (birthMonth == 2 && birthDay > 28){
			printf("�ٽ� �Է��ϼ���. 28�ϱ����Դϴ�.\n");
            continue;
        }
      	}
      	
		if (birthMonth == 4 || birthMonth == 6 || birthMonth == 9 || birthMonth == 11){
        if (birthDay > 30){
			printf("�ٽ� �Է��ϼ���. 30�ϱ����Դϴ�.\n");
            continue;
        }
        }
      	if (birthMonth == 1 || birthMonth == 3 || birthMonth == 5 || birthMonth == 7 || birthMonth == 8 || birthMonth == 10 || birthMonth == 12){
        if (birthDay > 31){
			printf("�ٽ� �Է��ϼ���. 31�ϱ����Դϴ�.\n");
			continue;
        }
    	}
    break;
   	}

		ageList[totalOrderCount] = age;
	
		//���� �� ���̴뺰 �ݾ� 
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
	
		if(ageList[totalOrderCount] >= 65) ageName[totalOrderCount] = "����";
		else if (ageList[totalOrderCount]>=19) ageName[totalOrderCount] = "�";
		else if (ageList[totalOrderCount]>=13) ageName[totalOrderCount] = "û�ҳ�";
		else if (ageList[totalOrderCount]>=3) ageName[totalOrderCount] = "���";
		else if (ageList[totalOrderCount]<=2) ageName[totalOrderCount] = "������";
	
		//Ƽ�� ���� �Է�
		while (1){ //Ƽ�� ���� �Է� �ݺ� 
		printf("��� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n"); 
		scanf("%d", &ticketNum);
		  
		if (ticketNum >= 1  && ticketNum <11){
			(price = price * ticketNum); 
			break;
			}	
		else
			printf("�ٽ� �Է��ϼ���.\n");				
		} 
		
		numList[totalOrderCount] = ticketNum;
		
		//������ ����
		while (1){ //������ ���� �ݺ�
		printf("�������� �����ϼ���.\n 1. ���� (���� ���� �ڵ�ó��)\n 2. �����\n 3. ����������\n 4. ���ڳ�\n 5. �ӻ��\n"); 
		scanf("%d", &discount);
			  
		if (discount > 6 || discount == 0 ) printf("��ȿ���� �Է��ϼ���.");	
		else if (discount == 1) {price = price * 1; break;}	
		else if	(discount == 2) {price = price * 0.6; break;}	
		else if (discount == 3) {price = price * 0.5; break;}
		else if	(discount == 4) {price = price * 0.8; break;}
		else if	(discount == 5) {price = price * 0.85; break;}	
		}

		discountList[totalOrderCount] = discount;		
	
		if (discountList[totalOrderCount] == 1) discountName[totalOrderCount] = "*����������";
		if (discountList[totalOrderCount] == 2) discountName[totalOrderCount] = "*����ο������";
		if (discountList[totalOrderCount] == 3) discountName[totalOrderCount] = "*���������ڿ������";
		if (discountList[totalOrderCount] == 4) discountName[totalOrderCount] = "*���ڳ�������";
		if (discountList[totalOrderCount] == 5) discountName[totalOrderCount] = "*�ӻ�ο������";
		
		printf("������ %d �� �Դϴ�.\n�����մϴ�.", price);
		
		priceList[totalOrderCount] = price;
		
		totalOrderCount ++;
		
		int addOrder; //�ֹ� �߰� ����
		
		//�߰� �ֹ� ����  
		while (1){ //�ֹ� �߰� �ݺ�
		printf("�߰� �ֹ� �Ͻðڽ��ϱ�?\n 1. ��, 2. �ƴϿ�");
		scanf("%d", &addOrder);
		  
		if (addOrder == 1 || addOrder == 2)
			break;
		else
			printf("�ٽ� �Է��ϼ���.\n");		
		}
		if (addOrder == 2)
			break;
	}

	printf("===================���̰���==================\n\n");
	
	int sum = 0;
	
	for (int i = 0; i < totalOrderCount; i++){
		printf("%5s %5s x %3d %10d�� %10s\n", ticketName[i], ageName[i], numList[i], priceList[i], discountName[i]);
		sum += priceList[i];
		printf("\n");
		}
		
	printf("\n����� �Ѿ��� %d���Դϴ�.\n\n=============================================\n", sum);
		

return 0;	
}

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
				
	printf("������ �����ϼ���.\n 1. �ְ���\n 2. �߰���\n");
	scanf("%d", &choice);

	if (choice != 1 && choice != 2) printf("��ȿ���� �Է��ϼ���.");
	
	else
	{	
		printf("�ֹι�ȣ�� �Է��ϼ���.\n");
		scanf("%lld", &ID);
	
		//windows.h �� ���� ���� ���ϴ� ���
	
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
	
	printf("��� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
	scanf("%d", &ticketNum);
	
		if (ticketNum > 10 || ticketNum == 0) printf("��ȿ���� �Է��ϼ���.");
		else
			price = price * ticketNum; 
	
	printf("�������� �����ϼ���.\n 1. ���� (���� ���� �ڵ�ó��)\n 2. �����\n 3. ����������\n 4. ���ڳ�\n 5. �ӻ��\n");
	scanf("%d", &discount);
	
		if (discount > 6 || discount == 0 ) printf("��ȿ���� �Է��ϼ���.");
		else if (discount == 1) price = price * 1;
		else if	(discount == 2) price = price * 0.6;
		else if (discount == 3) price = price * 0.5;
		else if	(discount == 4) price = price * 0.85;
	
	printf("������ %d �� �Դϴ�.\n�����մϴ�.", price);
	
	}
	return 0;
}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//ȯ�����α׷� IF �̿� 

int main()
{
	float WON;
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : "); 
	scanf("%f", &WON);
	
	int selectcash; 
	printf("ȯ���� ��ȭ�� �����ϼ���(1: USD, 2: JPY, 3: EUR, 4: CNY, 5: GBP) : ");
	scanf("%d", &selectcash);
	
	const float stdUSD = 1321.40;
	const float stdJPY = 959.44;
	const float stdEUR = 1392.00;
	const float stdCNY = 189.33;
	const float stdGBP = 1562.54;
	
	int won1000 , won500, won100, won50, won10;

	if (selectcash == 1)
		{
			printf("���� ȯ�� : %0.2f\n", stdUSD); // �Ҽ��� ��°�ڸ����� ǥ���� �� f�տ� 0.2 �Ǵ� .2 ���̱�
	
			int exUSD; //ȯ���� ��ȭ  
			exUSD = WON / stdUSD;
			printf("ȯ�� ���\n");
			printf("�޷� : %d �޷�\n", exUSD);
	 
			int chWON; //�Ž����� 
			chWON = WON - (stdUSD*exUSD); 
			int money;
			money = chWON - chWON%10; 
			printf("�Ž����� : %d��\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won50 = (money%100)/50;
			won10 = (money%50)/10;  
			
			printf("õ���� %d��\n", won1000);
			printf("����� %d��\n", won500);
			printf("��� %d��\n", won100);
			printf("���ʿ� %d��\n", won50);
			printf("�ʿ� %d��", won10);
			
			
		}
	
	else if (selectcash == 2)
		{
			printf("���� ȯ�� : %0.2f\n", stdJPY); 
	
			int exJPY;
			exJPY = WON / (stdJPY*0.01);
			printf("ȯ�� ���\n");
			printf("�� : %d ��\n", exJPY);
	 
	 		exJPY = WON / stdJPY;
	 		
			int chWON;
			chWON = WON - (stdJPY*exJPY); 
			int money;
			money = chWON - chWON%10; 
			printf("�Ž����� : %d��\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("õ���� %d��\n", won1000);
			printf("����� %d��\n", won500);
			printf("��� %d��\n", won100);
			printf("�ʿ� %d��", won10);
			
		}
	
	else if (selectcash == 3)
		{
			printf("���� ȯ�� : %0.2f\n", stdEUR); 
	
			int exEUR;
			exEUR = WON / stdEUR;
			printf("ȯ�� ���\n");
			printf("���� : %d ����\n", exEUR);
	 
			int chWON;
			chWON = WON - (stdEUR*exEUR); 
			int money;
			money = chWON - chWON%10; 
			printf("�Ž����� : %d��\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("õ���� %d��\n", won1000);
			printf("����� %d��\n", won500);
			printf("��� %d��\n", won100);
			printf("�ʿ� %d��", won10);
			
			
		}	
	
	else if (selectcash == 4)
		{
			printf("���� ȯ�� : %0.2f\n", stdCNY); 
	
			int exCNY;
			exCNY = WON / stdCNY;
			printf("ȯ�� ���\n");
			printf("���� : %d ����\n", exCNY);
	 
			int chWON;
			chWON = WON - (stdCNY*exCNY); 
			int money;
			money = chWON - chWON%10; 
			printf("�Ž����� : %d��\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("õ���� %d��\n", won1000);
			printf("����� %d��\n", won500);
			printf("��� %d��\n", won100);
			printf("�ʿ� %d��", won10);			
			
			
		}	
	
	else if (selectcash == 5)
		{
			printf("���� ȯ�� : %0.2f\n", stdGBP); 
	
			int exGBP;
			exGBP = WON / stdGBP;
			printf("ȯ�� ���\n");
			printf("�Ŀ�� : %d �Ŀ��\n", exGBP);
	 
			int chWON;
			chWON = WON - (stdGBP*exGBP); 
			int money;
			money = chWON - chWON%10; 
			printf("�Ž����� : %d��\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("õ���� %d��\n", won1000);
			printf("����� %d��\n", won500);
			printf("��� %d��\n", won100);
			printf("�ʿ� %d��", won10);
						
		}	

	else
		printf("�ٽ��Է��ϼ���.");
		
	return 0;
}

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//ȯ�����α׷� �迭 �̿� 

int main()
{
	float WON;
//	const float stdUSD = 1321.40;
//	const float stdJPY = 959.44;
//	const float stdEUR = 1392.00;
//	const float stdCNY = 189.33;
//	const float stdGBP = 1562.54;
	float exchangerate[10] = {0, 1321.40, 9.5944, 1392.00, 189.33, 1562.54};
	char* currency[10] = {"", "�޷�", "�� (1������)", "����", "����", "�Ŀ��"};
	int selectcash; 
	int won1000, won500, won100, won50, won10;
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : "); 
	scanf("%f", &WON);

	printf("ȯ���� ��ȭ�� �����ϼ���(1: USD, 2: JPY, 3: EUR, 4: CNY, 5: GBP) : ");
	scanf("%d", &selectcash);
	
	if (selectcash >= 1 && selectcash <=5)
		{
			printf("���� ȯ�� : %0.2f\n", exchangerate[selectcash]); // �Ҽ��� ��°�ڸ����� ǥ���� �� f�տ� 0.2 �Ǵ� .2 ���̱�
	
			int exCash = WON / exchangerate[selectcash]; //ȯ���� ��ȭ  
			printf("ȯ�� ���\n");
			printf("%s : %d %s\n", currency[selectcash], exCash, currency[selectcash]);
	 		printf("\n");
	 		
			int change = WON - (exchangerate[selectcash] * exCash); //�Ž����� 
			int money = change - change % 10;
			printf("�Ž����� : %d��\n", money);
			
			
			// �Ž������� 10�� ������ ������ �� ������ �ʿ��� ���� ���
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
	
	else
		printf("�ٽ��Է��ϼ���.");
		
	return 0;
}

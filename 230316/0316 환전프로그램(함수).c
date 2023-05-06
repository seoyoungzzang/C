#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//ȯ�����α׷� �迭, �Լ� �̿�  

//��º� �Լ� 
void printResult(const char* currency, int exCash, int money){
    printf("\nȯ�� ���\n");
    printf("%s : %d %s\n", currency, exCash, currency);
    printf("\n�Ž����� : %d��\n", money);
    printf("õ���� %d��\n", money/1000);
    printf("����� %d��\n", (money%1000)/500);
    printf("��� %d��\n", (money%500)/100);
    printf("���ʿ� %d��\n", (money%100)/50);
    printf("�ʿ� %d��", (money%50)/10);
}

//ó���� �Լ�  
void calcMoney(int selectcash, float WON){
	const char* currency[] = {"", "�޷�", "�� (1������)", "����", "����", "�Ŀ��"};
	const float exchangeRate[] = {0, 1321.40, 959.44, 1392.00, 189.33, 1562.54};	
		if (selectcash >= 1 && selectcash <= 5){
        printf("���� ȯ�� : %.2f\n", exchangeRate[selectcash]);
        int exCash = WON / exchangeRate[selectcash];
        int change = WON - (exchangeRate[selectcash] * exCash); // �Ž����� 
        int money = change - (change % 10); // �Ž����� 1�� ���� ó�� 
        printResult(currency[selectcash], exCash, money);
    	}
    	else{
        printf("�ٽ� �Է��ϼ���.");
    	}
}	

int main()
{
	float WON;
	int selectcash; 
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : "); 
	scanf("%f", &WON);

	printf("ȯ���� ��ȭ�� �����ϼ���(1: USD, 2: JPY, 3: EUR, 4: CNY, 5: GBP) : ");
	scanf("%d", &selectcash);

	calcMoney(selectcash, WON);
    
    return 0;
}

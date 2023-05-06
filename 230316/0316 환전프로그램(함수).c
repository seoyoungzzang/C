#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//환전프로그램 배열, 함수 이용  

//출력부 함수 
void printResult(const char* currency, int exCash, int money){
    printf("\n환전 결과\n");
    printf("%s : %d %s\n", currency, exCash, currency);
    printf("\n거스름돈 : %d원\n", money);
    printf("천원권 %d장\n", money/1000);
    printf("오백원 %d개\n", (money%1000)/500);
    printf("백원 %d개\n", (money%500)/100);
    printf("오십원 %d개\n", (money%100)/50);
    printf("십원 %d개", (money%50)/10);
}

//처리부 함수  
void calcMoney(int selectcash, float WON){
	const char* currency[] = {"", "달러", "엔 (1엔기준)", "유로", "위안", "파운드"};
	const float exchangeRate[] = {0, 1321.40, 959.44, 1392.00, 189.33, 1562.54};	
		if (selectcash >= 1 && selectcash <= 5){
        printf("기준 환율 : %.2f\n", exchangeRate[selectcash]);
        int exCash = WON / exchangeRate[selectcash];
        int change = WON - (exchangeRate[selectcash] * exCash); // 거스름돈 
        int money = change - (change % 10); // 거스름돈 1원 단위 처리 
        printResult(currency[selectcash], exCash, money);
    	}
    	else{
        printf("다시 입력하세요.");
    	}
}	

int main()
{
	float WON;
	int selectcash; 
	
	printf("환전을 원하는 금액을 입력하세요(원화) : "); 
	scanf("%f", &WON);

	printf("환전할 외화를 선택하세요(1: USD, 2: JPY, 3: EUR, 4: CNY, 5: GBP) : ");
	scanf("%d", &selectcash);

	calcMoney(selectcash, WON);
    
    return 0;
}

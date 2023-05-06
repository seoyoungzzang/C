#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//환전프로그램 배열 이용 

int main()
{
	float WON;
//	const float stdUSD = 1321.40;
//	const float stdJPY = 959.44;
//	const float stdEUR = 1392.00;
//	const float stdCNY = 189.33;
//	const float stdGBP = 1562.54;
	float exchangerate[10] = {0, 1321.40, 9.5944, 1392.00, 189.33, 1562.54};
	char* currency[10] = {"", "달러", "엔 (1엔기준)", "유로", "위안", "파운드"};
	int selectcash; 
	int won1000, won500, won100, won50, won10;
	
	printf("환전을 원하는 금액을 입력하세요(원화) : "); 
	scanf("%f", &WON);

	printf("환전할 외화를 선택하세요(1: USD, 2: JPY, 3: EUR, 4: CNY, 5: GBP) : ");
	scanf("%d", &selectcash);
	
	if (selectcash >= 1 && selectcash <=5)
		{
			printf("기준 환율 : %0.2f\n", exchangerate[selectcash]); // 소수점 둘째자리까지 표현할 때 f앞에 0.2 또는 .2 붙이기
	
			int exCash = WON / exchangerate[selectcash]; //환전한 외화  
			printf("환전 결과\n");
			printf("%s : %d %s\n", currency[selectcash], exCash, currency[selectcash]);
	 		printf("\n");
	 		
			int change = WON - (exchangerate[selectcash] * exCash); //거스름돈 
			int money = change - change % 10;
			printf("거스름돈 : %d원\n", money);
			
			
			// 거스름돈을 10원 단위로 나누어 각 단위별 필요한 수량 계산
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won50 = (money%100)/50;
			won10 = (money%50)/10;  
			
			printf("천원권 %d장\n", won1000);
			printf("오백원 %d개\n", won500);
			printf("백원 %d개\n", won100);
			printf("오십원 %d개\n", won50);
			printf("십원 %d개", won10);
			
		}
	
	else
		printf("다시입력하세요.");
		
	return 0;
}

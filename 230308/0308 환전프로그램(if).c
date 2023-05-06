#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//환전프로그램 IF 이용 

int main()
{
	float WON;
	printf("환전을 원하는 금액을 입력하세요(원화) : "); 
	scanf("%f", &WON);
	
	int selectcash; 
	printf("환전할 외화를 선택하세요(1: USD, 2: JPY, 3: EUR, 4: CNY, 5: GBP) : ");
	scanf("%d", &selectcash);
	
	const float stdUSD = 1321.40;
	const float stdJPY = 959.44;
	const float stdEUR = 1392.00;
	const float stdCNY = 189.33;
	const float stdGBP = 1562.54;
	
	int won1000 , won500, won100, won50, won10;

	if (selectcash == 1)
		{
			printf("기준 환율 : %0.2f\n", stdUSD); // 소수점 둘째자리까지 표현할 때 f앞에 0.2 또는 .2 붙이기
	
			int exUSD; //환전한 외화  
			exUSD = WON / stdUSD;
			printf("환전 결과\n");
			printf("달러 : %d 달러\n", exUSD);
	 
			int chWON; //거스름돈 
			chWON = WON - (stdUSD*exUSD); 
			int money;
			money = chWON - chWON%10; 
			printf("거스름돈 : %d원\n", money);
			
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
	
	else if (selectcash == 2)
		{
			printf("기준 환율 : %0.2f\n", stdJPY); 
	
			int exJPY;
			exJPY = WON / (stdJPY*0.01);
			printf("환전 결과\n");
			printf("엔 : %d 엔\n", exJPY);
	 
	 		exJPY = WON / stdJPY;
	 		
			int chWON;
			chWON = WON - (stdJPY*exJPY); 
			int money;
			money = chWON - chWON%10; 
			printf("거스름돈 : %d원\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("천원권 %d장\n", won1000);
			printf("오백원 %d개\n", won500);
			printf("백원 %d개\n", won100);
			printf("십원 %d개", won10);
			
		}
	
	else if (selectcash == 3)
		{
			printf("기준 환율 : %0.2f\n", stdEUR); 
	
			int exEUR;
			exEUR = WON / stdEUR;
			printf("환전 결과\n");
			printf("유로 : %d 유로\n", exEUR);
	 
			int chWON;
			chWON = WON - (stdEUR*exEUR); 
			int money;
			money = chWON - chWON%10; 
			printf("거스름돈 : %d원\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("천원권 %d장\n", won1000);
			printf("오백원 %d개\n", won500);
			printf("백원 %d개\n", won100);
			printf("십원 %d개", won10);
			
			
		}	
	
	else if (selectcash == 4)
		{
			printf("기준 환율 : %0.2f\n", stdCNY); 
	
			int exCNY;
			exCNY = WON / stdCNY;
			printf("환전 결과\n");
			printf("위안 : %d 위안\n", exCNY);
	 
			int chWON;
			chWON = WON - (stdCNY*exCNY); 
			int money;
			money = chWON - chWON%10; 
			printf("거스름돈 : %d원\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("천원권 %d장\n", won1000);
			printf("오백원 %d개\n", won500);
			printf("백원 %d개\n", won100);
			printf("십원 %d개", won10);			
			
			
		}	
	
	else if (selectcash == 5)
		{
			printf("기준 환율 : %0.2f\n", stdGBP); 
	
			int exGBP;
			exGBP = WON / stdGBP;
			printf("환전 결과\n");
			printf("파운드 : %d 파운드\n", exGBP);
	 
			int chWON;
			chWON = WON - (stdGBP*exGBP); 
			int money;
			money = chWON - chWON%10; 
			printf("거스름돈 : %d원\n", money);
			
			won1000 = money/1000;  
			won500 = (money%1000)/500;  
			won100 = (money%500)/100;  
			won10 = (money%100)/10;  
			
			printf("천원권 %d장\n", won1000);
			printf("오백원 %d개\n", won500);
			printf("백원 %d개\n", won100);
			printf("십원 %d개", won10);
						
		}	

	else
		printf("다시입력하세요.");
		
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//While 이용하여 가위바위보 프로그램 만들기 

int main()
{
	srand(time(NULL));
	int choice, com, end;
	int winCount=0, loseCount=0, drawCount=0; 
	
	while (1)
	{
		printf("\n0(가위), 1(바위), 2(보) 중 하나를 선택하세요.");
		scanf("%d", &choice);
		
		if(choice == 0) printf("당신은 가위를 냈습니다.\n");
		else if (choice == 1) printf("당신은 바위를 냈습니다.\n");
		else if (choice == 2) printf("당신은 보를 냈습니다.\n");
		
	if (choice < 0 || choice > 2)
		{
		printf("유효한 값을 입력하세요.\n");
		continue;	
		}
		
	com = rand()%3;
	
	if(com == 0) printf("컴퓨터는 가위를 냈습니다.\n");
	else if (com == 1) printf("컴퓨터는 바위를 냈습니다.\n");
	else if (com == 2) printf("컴퓨터는 보를 냈습니다.\n");
	
	if (choice == com) 
	{
	printf("비겼습니다.\n");
	drawCount++; 
	printf("%d번 비겼습니다.\n",drawCount );
	}
	
	else if ((choice == 0 && com == 2)  || (choice == 1 && com == 0) || (choice == 2 && com == 1))
	{
	printf("당신이 이겼습니다.\n");
	winCount++; 
	printf("%d번 이겼습니다.\n",winCount );
	}
	
	else if ((choice == 0 && com == 1)||(choice == 1 && com == 2)||(choice == 2 && com == 0))
	{
	printf("당신이 졌습니다.\n");
	loseCount++; 
	printf("%d번 졌습니다.\n",loseCount );
	}	
	
	printf ("게임을 계속 하시겠습니까? (1: 네, 2: 아니오)");
	scanf ("%d", &end);
	
	if (end == 2)
		break;	
	}	
	
	return 0; 
	
}

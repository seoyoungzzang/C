#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//While �̿��Ͽ� ���������� ���α׷� ����� 

int main()
{
	srand(time(NULL));
	int choice, com, end;
	int winCount=0, loseCount=0, drawCount=0; 
	
	while (1)
	{
		printf("\n0(����), 1(����), 2(��) �� �ϳ��� �����ϼ���.");
		scanf("%d", &choice);
		
		if(choice == 0) printf("����� ������ �½��ϴ�.\n");
		else if (choice == 1) printf("����� ������ �½��ϴ�.\n");
		else if (choice == 2) printf("����� ���� �½��ϴ�.\n");
		
	if (choice < 0 || choice > 2)
		{
		printf("��ȿ�� ���� �Է��ϼ���.\n");
		continue;	
		}
		
	com = rand()%3;
	
	if(com == 0) printf("��ǻ�ʹ� ������ �½��ϴ�.\n");
	else if (com == 1) printf("��ǻ�ʹ� ������ �½��ϴ�.\n");
	else if (com == 2) printf("��ǻ�ʹ� ���� �½��ϴ�.\n");
	
	if (choice == com) 
	{
	printf("�����ϴ�.\n");
	drawCount++; 
	printf("%d�� �����ϴ�.\n",drawCount );
	}
	
	else if ((choice == 0 && com == 2)  || (choice == 1 && com == 0) || (choice == 2 && com == 1))
	{
	printf("����� �̰���ϴ�.\n");
	winCount++; 
	printf("%d�� �̰���ϴ�.\n",winCount );
	}
	
	else if ((choice == 0 && com == 1)||(choice == 1 && com == 2)||(choice == 2 && com == 0))
	{
	printf("����� �����ϴ�.\n");
	loseCount++; 
	printf("%d�� �����ϴ�.\n",loseCount );
	}	
	
	printf ("������ ��� �Ͻðڽ��ϱ�? (1: ��, 2: �ƴϿ�)");
	scanf ("%d", &end);
	
	if (end == 2)
		break;	
	}	
	
	return 0; 
	
}

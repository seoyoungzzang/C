#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//esle if
 
int main()
{
	int var1, var2 ;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &var1, &var2);
	
	int avr;
	avr = (var1 + var2)/2;
	
	if (avr >= 90)
		{
		printf ("평균은 %d입니다.\n", avr);
		printf ("성적은 A입니다.");
		}
	
	else if (avr >= 80)
		{
		printf ("평균은 %d입니다.\n", avr);
		printf ("성적은 B입니다.");
		}
	
	else if (avr >= 70)
		{
		printf ("평균은 %d입니다.\n", avr);
		printf ("성적은 C입니다.");
		}
	
	else
		{
		printf ("평균은 %d입니다.\n", avr);
		printf ("성적은 F입니다.");
		}
	
	return 0;
}



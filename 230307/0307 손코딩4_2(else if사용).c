#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//esle if
 
int main()
{
	int var1, var2 ;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &var1, &var2);
	
	int avr;
	avr = (var1 + var2)/2;
	
	if (avr >= 90)
		{
		printf ("����� %d�Դϴ�.\n", avr);
		printf ("������ A�Դϴ�.");
		}
	
	else if (avr >= 80)
		{
		printf ("����� %d�Դϴ�.\n", avr);
		printf ("������ B�Դϴ�.");
		}
	
	else if (avr >= 70)
		{
		printf ("����� %d�Դϴ�.\n", avr);
		printf ("������ C�Դϴ�.");
		}
	
	else
		{
		printf ("����� %d�Դϴ�.\n", avr);
		printf ("������ F�Դϴ�.");
		}
	
	return 0;
}



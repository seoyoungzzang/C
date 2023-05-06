#include <stdio.h>

int main()
{
	printf("Hello, world!\n");
	printf("My name is : %s, age is %d\n", "Kim", 20);
	printf("%s\n", "Hello, world!");
	
	printf("%10s %7s %7s %7s %7s\n", "Ç°¸ñ", "°¡°Ý", "¼ö·®", "°è", "R/R");
	printf("%-10s %7d %7d %7d %7d%%\n", "»ï°¢±è¹ä", 1200, 1, 1200 * 1, 10);
	printf("%-10s %7d %7d %7d %7d%%\n", "»ý¼ö", 1500, 2, 1500 * 2, 5 );
	
	printf("%s", "---------------------------------------------\n");
	printf("%s", "---------------------------------------------\n");
	
	int numberOne;
	int numberTwo;
	int numberThree;
	
	numberOne=10;
	numberTwo=20;
	numberThree=30;
	
	printf("%d %d %d\n", numberOne, numberTwo, numberThree);
	
	char num1 = -10;
	short num2 = 30000;
	int num3 = -1234567890;
	long num4 = 1234567890;
	long long num5 = -1234567890123456789;
	
	printf("%d %d %d %d %lld\n", num1, num2, num3, num4, num5);
	
	
	unsigned char num6 = 200;
	unsigned short num7 = 60000;
	unsigned int num8 = 4123456789;
	unsigned long num9 = 123456789;
	unsigned long long num10 = 12345678901234567890;
	
	printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
	
	
	char character1 = 'a';
	char character2 = 'b';
	
	printf("%c %d\n", character1, character1);
	printf("%c %d\n", character2, character2);
	
	
	char character3 = 97;
	char character4 = 98;
	
	printf("%c %d\n", character3, character3);
	printf("%c %d\n", character4, character4);
	
	
	const int constantValue=10;
	//constantValue=20; ¿¡·¯ ³² 
	printf("%d", constantValue);
	
	return 0;
}

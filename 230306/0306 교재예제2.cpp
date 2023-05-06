#include <stdio.h>

int main()
{
	
	char bloodType;
	scanf("%c", &bloodType);
	printf("혈액형: %c\n", bloodType);
	
	
	char affiliation[20];
	scanf("%s", &affiliation);
	printf("소속: %s\n", affiliation);
	
	
	int digit1, digit2;
	char operation;
	scanf("%d %c %d", &digit1, &operation, &digit2);
	printf("첫 번째 숫자: %d\n", digit1);
	printf("수식: %c\n", operation);
	printf("두 번째 숫자: %d\n", digit2);
	
	return 0;
		
	}	



#include <stdio.h>

int main()
{
	
	char bloodType;
	scanf("%c", &bloodType);
	printf("������: %c\n", bloodType);
	
	
	char affiliation[20];
	scanf("%s", &affiliation);
	printf("�Ҽ�: %s\n", affiliation);
	
	
	int digit1, digit2;
	char operation;
	scanf("%d %c %d", &digit1, &operation, &digit2);
	printf("ù ��° ����: %d\n", digit1);
	printf("����: %c\n", operation);
	printf("�� ��° ����: %d\n", digit2);
	
	return 0;
		
	}	



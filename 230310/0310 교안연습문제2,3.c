#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
 
int main()
{
// ���ȿ�������2 (1���� 100������ ��) 
	/*
	int i, result;
	
	for ( i=1 ; i < 101 ; i++);
		result = result + i;
	
	
	printf("1���� 100������ ���� %d�Դϴ�.", result);
	*/
	
// ���ȿ�������3 (1���� n������ ��)
	int count;
	long sum;
	printf("N�� �Է��ϼ���: ");
	scanf("%d", &count);
	
	for (int i = 1 ; i <= count ; i++)
		{
		sum = sum + i;
		}	
	printf("1���� %d�������� %ld �Դϴ�.", count, sum);
	
	return 0;
}

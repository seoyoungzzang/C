#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
// ���ȿ�������4 (����������ϱ�) 
// i�� 2�϶� j�� 1���� 9���� 9�� �ݺ� �����ϰ�,  i�� 3�϶� j�� 1���� 9���� 9�� �ݺ� ������ �ݺ��ϴ� ����  
int main()
{
	int i, j;

	for (i=2 ; i<10 ; i++)
		{
		printf("%d��\n", i);
		for (j =1; j <10 ; j++)
		printf("%d * %d = %d\n", i, j, i * j);
		printf("\n");
		}
	
		return 0;
}



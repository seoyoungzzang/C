#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
// ���ȿ�������5(1~10�ܱ��� ������ ���, �� 3�� ����� ���� ���X) 
int main()
{
	int i, j;
	for (i = 1 ; i < 11 ; i++)
		{
			if( i % 3 == 0 ) printf("\n==%d��==\n�̾�~ Skip~!\n");
				
			else
			{	
			printf("\n==%d��==\n",i);
			for (j = 1 ; j <10 ; j++)
			printf("%d * %d = %d\n", i, j, i*j);
			}
		}
			
		return 0;
}

#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
// 교안연습문제5(1~10단까지 구구단 출력, 단 3의 배수인 단은 출력X) 
int main()
{
	int i, j;
	for (i = 1 ; i < 11 ; i++)
		{
			if( i % 3 == 0 ) printf("\n==%d단==\n미안~ Skip~!\n");
				
			else
			{	
			printf("\n==%d단==\n",i);
			for (j = 1 ; j <10 ; j++)
			printf("%d * %d = %d\n", i, j, i*j);
			}
		}
			
		return 0;
}

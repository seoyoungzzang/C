#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����3-5

int main()
{
	int excel, pp, word ;
	printf("����, �Ŀ�����Ʈ, ������ ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &excel, &pp, &word);
	
	int avg;
	avg = (excel + pp + word) /3 ;
	
	if (avg >= 60 && excel >= 40 && pp >= 40 && word >= 40) 
		{
		printf("���� : %d, �Ŀ�����Ʈ :  %d, ���� :  %d \n", excel, pp, word);
		printf("��� : %d\n", avg);
		printf( "�հ�");
		}
		
	else
		{
		printf("���� : %d, �Ŀ�����Ʈ :  %d, ���� :  %d \n", excel, pp, word);
		printf("��� : %d\n", avg);
		printf ("���հ�");
		}
		
	return 0 ;
}




#include <stdio.h>
#include <math.h>
#define _CTR_SECURE_NO_WARNINGS
// ���ȿ�������1 (���Ⱑ 5�� ����ǵ��� ����) 

int main()
{
	int i, num1, num2, result;
	char cal;

	for ( i = 1 ; i < 6 ; i++)
	{
		
	printf("\n %d��°, ������ �Է��ϼ���: ", i);
	scanf("%d %c %d", &num1, &cal, &num2);

	{
		if( cal == '+') 
		{
		result = num1+num2;
		printf("%d %c %d = %d �Դϴ�.", num1, cal, num2, result);
		}
		else if( cal == '-') 
		{
		result = num1-num2;
		printf("%d %c %d = %d �Դϴ�.", num1, cal, num2, result);
		}
		else if( cal == '*')
		{
		result = num1*num2;
		printf("%d %c %d = %d �Դϴ�.", num1, cal, num2, result);
		}
		else if( cal == '/') 
		{
		result = num1/num2;
		printf("%d %c %d = %d �Դϴ�.", num1, cal, num2, result);
		}
		else if( cal == '^') 
		{
		result = pow(num1, num2);
		printf("%d %c %d = %d �Դϴ�.", num1, cal, num2, result);
		}
	}
	}
	return 0; 	
}

#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

//���ڵ�2 

int main()
{
	float a, b, c;
	printf("a b c �Է�: ");
	scanf("%f%f%f", &a, &b, &c);
	
	float x1, x2 ;
		
	x1 = ((- b + sqrt(b * b - 4 * a * c)) / (2 * a)) ;
	x2 = ((+ b + sqrt(b * b - 4 * a * c)) / (2 * a)) ;
	
	if (a == 0 || (b * b - 4 * a * c) < 0 )
		printf("�ذ� �������� �ʽ��ϴ�.");
	else
		printf("����� %f, %f �Դϴ�.", x1, x2);

	return 0; 

}

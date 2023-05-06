#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

//손코딩2 

int main()
{
	float a, b, c;
	printf("a b c 입력: ");
	scanf("%f%f%f", &a, &b, &c);
	
	float x1, x2 ;
		
	x1 = ((- b + sqrt(b * b - 4 * a * c)) / (2 * a)) ;
	x2 = ((+ b + sqrt(b * b - 4 * a * c)) / (2 * a)) ;
	
	if (a == 0 || (b * b - 4 * a * c) < 0 )
		printf("해가 존재하지 않습니다.");
	else
		printf("결과는 %f, %f 입니다.", x1, x2);

	return 0; 

}

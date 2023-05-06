#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//손코딩1 (pow/sqrt 이용해서 구할 수도 있음) 

int main()
{
	int a, b, c, d, e, f ;
	printf("P1(x,y) : ");
	scanf("%d%d", &a, &b);
	printf("P2(x,y) : ");
	scanf("%d%d", &c, &d);
	printf("P3(x,y) : ");
	scanf("%d%d", &e, &f);

	float area ;
	area = (((a*d + c*f + e*b)-(c*b + e*d + f*a))/2);
	
	if (area < 0)
		area= area * -1;
		
	printf("삼각형의 넓이는 %f 입니다.", area);
	
	
	return 0;
}

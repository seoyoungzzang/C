#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//���ڵ�1 (pow/sqrt �̿��ؼ� ���� ���� ����) 

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
		
	printf("�ﰢ���� ���̴� %f �Դϴ�.", area);
	
	
	return 0;
}

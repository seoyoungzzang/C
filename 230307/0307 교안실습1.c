#include <stdio.h>
int main()
{
	//실수나누기
	float num1 = 1.0f;
	float num2 = 0.0f;
	float num3;
	
	num3 = num1 / num2;
	
	printf("%f\n", num3);
	
	
	//삼각형의 넓이 구하기
	int base = 20;
	int height = 16;
	int area;
	
	area = base * height / 2;
	
	printf("%d\n", area);
	
	//나머지 연산 > 정수에서 나머지를 계산해 주는 연산 %로 표시
	int num4 = 15;
	int num5 = 27;
	int num6 = 3;
	
	num4 %= num6;
	num5 %= num6;
	
	printf("%d\n", num4);
	printf("%d\n", num5);

	 
	return 0;
}

#include <stdio.h>
int main()
{
	//�Ǽ�������
	float num1 = 1.0f;
	float num2 = 0.0f;
	float num3;
	
	num3 = num1 / num2;
	
	printf("%f\n", num3);
	
	
	//�ﰢ���� ���� ���ϱ�
	int base = 20;
	int height = 16;
	int area;
	
	area = base * height / 2;
	
	printf("%d\n", area);
	
	//������ ���� > �������� �������� ����� �ִ� ���� %�� ǥ��
	int num4 = 15;
	int num5 = 27;
	int num6 = 3;
	
	num4 %= num6;
	num5 %= num6;
	
	printf("%d\n", num4);
	printf("%d\n", num5);

	 
	return 0;
}

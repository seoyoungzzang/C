#include<stdio.h>

int main()
{
	//�迭���� 
//	int numArr[10] = {0, 1};
//	
//	printf("%d\n", numArr[0]);
//	printf("%d\n", numArr[5]);
//	printf("%d\n", numArr[1]);

	//�ݺ������� �迭�� ���
//	int num[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
//	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
//		printf("%d\n", num[i]); 

//	//��������1 �迭�� �� �հ� ���ϱ�
//	int num[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
//	int sum = 0; 
//	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
//		sum = sum + num[i];
//		printf("%d\n", sum); 

	//��������2 �迭�� ���� 2��� ���� ����ϱ�
	int num[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	int mul; 
	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
		num[i] = num[i] * 2;
	
	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
		printf("%d\n", num[i]);
	
	 
	return 0;
}

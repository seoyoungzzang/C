 #include <stdio.h>
 #define _CTR_SECURE_NO_WARNINGS
 
 int main()
 {
 	// for�� �⺻���� 
 	/*
	int i;
 	for (i = 0 ; i <10 ; i++);
 	{ 		
 		printf("Hello, World\n");	
	 }
 	printf("%d", i);
 	*/
 	
 	//�ʱⰪ�� 1���� ����  
 	/*
	 for ( int i = 1; i <= 100; i++)
	{
		printf("Hello, World! %d\n", i);
	 } 
	*/ 
	
	//�Է��� Ƚ����� �ݺ� 
	/*
	int count;
	scanf("%d", &count);
	
	for ( int i = 0; i < count ; i++) 
	printf("Hello, World! %d\n", i);
	*/
	
	//�Է��� Ƚ����� �ݺ�(����) 
	/*
	int count;
	scanf("%d", &count);
	
	for ( int i = count; i >0 ; i--) 
	printf("Hello, World! %d\n", i);
	*/
	
	//�ʱⰪ ���� �Է��� ������ ���ҽ��� �ݺ�
	/*
	int count;
	scanf("%d", &count);
	
	for ( ; count>0; count--) 
	printf("Hello, World! %d\n", count); 
	*/
	
	//�ݺ������� ���� 2�� ���
	/*
	for(int i=0, j=0 ; i<10; i++, j=2)
	printf("i: %d, j: %d\n", i, j);
	*/
	
	//�ݺ������� ���ѷ��� �����
	/*
	for( ;;)
	printf("Hello, World!\n"); 
	*/
 	return 0;
 }

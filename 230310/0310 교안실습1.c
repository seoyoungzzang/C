 #include <stdio.h>
 #define _CTR_SECURE_NO_WARNINGS
 
 int main()
 {
 	// for문 기본문법 
 	/*
	int i;
 	for (i = 0 ; i <10 ; i++);
 	{ 		
 		printf("Hello, World\n");	
	 }
 	printf("%d", i);
 	*/
 	
 	//초기값을 1부터 시작  
 	/*
	 for ( int i = 1; i <= 100; i++)
	{
		printf("Hello, World! %d\n", i);
	 } 
	*/ 
	
	//입력한 횟수대로 반복 
	/*
	int count;
	scanf("%d", &count);
	
	for ( int i = 0; i < count ; i++) 
	printf("Hello, World! %d\n", i);
	*/
	
	//입력한 횟수대로 반복(감소) 
	/*
	int count;
	scanf("%d", &count);
	
	for ( int i = count; i >0 ; i--) 
	printf("Hello, World! %d\n", i);
	*/
	
	//초기값 없이 입력한 변수를 감소시켜 반복
	/*
	int count;
	scanf("%d", &count);
	
	for ( ; count>0; count--) 
	printf("Hello, World! %d\n", count); 
	*/
	
	//반복문에서 변수 2개 사용
	/*
	for(int i=0, j=0 ; i<10; i++, j=2)
	printf("i: %d, j: %d\n", i, j);
	*/
	
	//반복문으로 무한루프 만들기
	/*
	for( ;;)
	printf("Hello, World!\n"); 
	*/
 	return 0;
 }

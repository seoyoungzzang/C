#include <stdio.h>

int main()
{
	int inputNum, i, j;
	printf("숫자 몇까지 할까요? ");
	scanf("%d", &inputNum);
	
	for (i = 1; i <= inputNum; i++){
		printf("%d", i); //1부터 inputNum까지 숫자 출력 
		int count=0; //count는 369개수 의미, 0으로 초기화 
		j = i; //j는 검사할 숫자 
		
		while (j  > 0){
			if((j % 10) == 3 || (j % 10) == 6 || (j % 10) == 9) //검사할 숫자의 1의 자리수 검사
				count++;  
			j = j/10; //다음 자리수 검사   
			//예를들어 123을 검사한다. 그러면 123%10을 먼저 함 그러면 나머지가 3이 나옴, 그럼 3은 369 중에 있으므로 count가 증가, 
			// 다음으로 123을 10으로 나눈 몫인 12에 369가 있는지 검사함 만약 369가 있다면 또 count 증가, 없으면 빠져나옴  
	}
	if (count == 0) printf(""); // 369가 하나도 없으면 ""출력  
	else {
		for (j = 0 ; j <count ; j++) //
			printf ("짝");
	}	
	printf ("\n");
}
	return 0;
}

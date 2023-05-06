#include <stdio.h>

int main()
{
	
	int math = 90;
	int english = 85;
	int programming = 100;
	
	printf("수학\t\t영어\t\t프로그래밍\n");
	printf("%d\t%d\t%d\t", math, english, programming);
	
	
	int input1, input2;
	int returnData = 0;
	returnData = scanf("%d %d", &input1, &input2);
	printf("반환 값: %d", returnData);
	
	

	int age;
	scanf("%d", &age);
	printf("나이: %d", age);
	
	
	float height;
	scanf("%f", &height);
	printf("키: %f", height);


	int linuxScore, javaScore, cScore;
	scanf("%d %d %d", &linuxScore, &javaScore, &cScore );
	printf("Linux: %d\n", linuxScore);
	printf("Java: %d\n", javaScore);
	printf("C: %d\n\n", cScore);
	
	
	char bloodType;
	scanf("%c", &bloodType);
	printf("혈액형: %c\n", bloodType);
	
	return 0; 
}




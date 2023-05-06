#include <stdio.h>
#include <windows.h>

int main()
{
	long long ID;
	int birthyear, age;
	
	printf("주민번호를 입력하세요.\n");
	scanf("%lld", &ID);
	
	SYSTEMTIME current_time;
    GetLocalTime(&current_time);
    
    int current_year = current_time.wYear;
    birthyear = ID/100000000000;
    
    age = ((current_year-birthyear))%100 + 1;
    
    printf("%d", age);
    
    
	return 0;
	
}




#include <stdio.h>
#include <windows.h>

int main()
{
	long long ID;
	int birthyear, age;
	
	printf("�ֹι�ȣ�� �Է��ϼ���.\n");
	scanf("%lld", &ID);
	
	SYSTEMTIME current_time;
    GetLocalTime(&current_time);
    
    int current_year = current_time.wYear;
    birthyear = ID/100000000000;
    
    age = ((current_year-birthyear))%100 + 1;
    
    printf("%d", age);
    
    
	return 0;
	
}




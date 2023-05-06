#include <stdio.h>
#include <time.h>
int main()
{
    long long inputNumber;
	int inputYear, inputMonth, inputDay;
    int age;
    int flag;
    
    scanf("%lld", &inputNumber);
       
    time_t t = time(NULL);  
    struct tm *now = localtime(&t);  
    int todayYear = now->tm_year + 1900;  
    int todayMonth = now->tm_mon + 1;  
    int todayDay = now->tm_mday;  
	
	inputYear = inputNumber / 100000000000; //주민번호에서 연도 두자리 가져 옴 
	inputNumber -= inputYear * 100000000000;
	inputMonth = inputNumber / 1000000000; //주민번호에서 월 두자리 가져옴  
	inputNumber -= (long long)((long long)inputMonth * 1000000000);
	inputDay = inputNumber / 10000000; //주민번호에서 일 두자리 가져옴 
	inputNumber -= (long long)((long long)inputDay * 10000000);
	flag = inputNumber / 1000000; // 주민번호 뒷자리 중 첫번째 숫자 가져옴 
	
	
	//뒷자리 중 첫번째 숫자가 1,2 이면 inputYear에 1900을 더해줘서 출생연도 4자리 구하고
	//뒷자리 중 첫번째 술자가 3,4 이면 inputYear에 2000을 더해줘서 출생연도 4자리 구하기 
	switch(flag) 
	{
		case 1:
		case 2:
			inputYear += 1900;
			break;
		default:
			inputYear += 2000;
	}
	
	//나이구하는 공식 
	age = todayYear - inputYear;
	
	//생일이 자났는지 안지났는지에 따라 만나이가 바뀌므로 
	if(inputMonth > todayMonth) //생일 안지남 
		age--;		
	} else if(inputMonth == todayMonth && inputDay > todayDay) //생일 안지남 
	{
		age--;
	}
	
	printf("나이 : %d\n", age);
	
	
    return 0;
}






















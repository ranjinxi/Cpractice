/*************************************************************************
	> File Name: 120.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 17时53分03秒
 ************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;
    scanf("%d-%d-%d", &year, &month, &day);
    
    if(month==1||month==3||month==5||month==7||month==8||month==10 || month==12){
		if( day <= 31 && day >= 1)
		printf("YES");
	}
	
  return 0;  
}

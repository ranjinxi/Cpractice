/*************************************************************************
	> File Name: 125.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 16时32分36秒
 ************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

int day_percent(int t) {
	
	return (3600*24);
}

int main() {
	int h, m, s; 
	int t;
	cin >> h >> m >> s >> t;
	h = t /3600 + h, m = t % 3600 / 60 + m, s = t %60 +s; 

	if (s > 60)
	   s = s - 60, m += 1;
	if(m > 60) 
	   m = m - 60, h += 1; 
	if(h > 23) 
	   h = h - 24;				
	
	
	if (h < 12 && h > 0) {
		printf("%d:%d:%dam\n", h, m, s);
	}
	else if(h == 0)
		printf("%d:%d:%dam\n", 12, m, s);
	else if(h == 12)
		printf("%d:%d:%dpm\n", 12, m, s);
	else if (h > 12) 
		printf("%d:%d:%dpm\n", h-12, m, s);
	
	printf("%.2lf%\n", day_percent(t));
		
}

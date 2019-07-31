/*************************************************************************
	> File Name: 139.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 20时50分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	int  n, i, j;
	cin >> n;
	for(i = 0; i < 2*n-1; i++) {
		for(j = 0; j < abs((n -1)-i); j++) {
			printf(" ");
		}
		if(i <= n-1) {
		for(j = 0; j < i+1 ; j++) {
			printf("%c%c",'A','A');
		}
		}
		else 
			for(j = 0; j < 2*n- i -1; j++) {
			printf("%c%c",'A','A');
		}
        if(i != 2*n-2)
        printf("\n");
	}
	return 0;
}

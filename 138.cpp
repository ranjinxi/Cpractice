/*************************************************************************
	> File Name: 138.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 20时22分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int i, j, s, n;
	cin >> n;
	s = 0;
	for(i = 0; i < n; i++) {
		for(j = i; j < n; j++) {
			printf("%c%c", 'A','A');
		}
		printf("\n");
	}
	return 0;
}

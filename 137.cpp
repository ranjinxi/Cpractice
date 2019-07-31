/*************************************************************************
	> File Name: 137.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 20时17分22秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int i, j, s, n;
	cin >> n;
	s = 0;
	for(i = 0; i < n; i++) {
		for(j = i; j < n; j++) {
			printf("%c", 'A'+s);
			s++;
		}
		printf("\n");
	}
	return 0;
}

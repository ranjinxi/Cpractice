/*************************************************************************
	> File Name: 144.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 11时04分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char string[100];
	int i, s = 0;
	cin >> string;
	for (i = 0; string[i] != 0; i++) {
		if (string[i] == 'A') {
			s++;
		}
	}
	cout << s;
}

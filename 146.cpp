/*************************************************************************
	> File Name: 146.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 11时15分40秒
 ************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	char string[50];
	int i;
	cin >> string;
	for (i = 0; string[i] != 0; i++) {
		if (('a' <= string[i] && string[i] <= 'z') || ('A' <= string[i] && string[i] <= 'Z') ) {
		if (string[i] == 'z') {
			string[i] = 'a';
		}
		else if(string[i] == 'Z')
			string[i] = 'A';
		else
			string[i] = string[i] + 1;
	}}
	cout << string;
	
}

/*************************************************************************
	> File Name: 142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月30日 星期二 13时34分58秒
 ************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

int is_prime(int i) {
    int n;
	for (n = 2; n * n <= i; n++) {
		if(i % n == 0)
			return 0;
	}
	return 1;
}
 
int is_palind(int  i) {
	if((i % 10 == i /10000) && (i % 100 /10 == i / 1000 % 10)) {
		return 1;
	}
	return 0;
}

int main() {
	int a, b, f, i;
	cin >> a >> b;
	f = 0;
	for (i = a; i <= b; i++) {
		if ( f == 1 && (is_prime(i) && is_palind(i))) {
			cout << " ";
		}
		if (is_prime(i) && is_palind(i)){
			cout << i;
			f = 1;
		}
	}
	return 0;	
}

/*************************************************************************
	> File Name: 143.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 10时43分29秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#include <stdio.h>
using namespace std;

int is_prime(int n) {
	int i;
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0)
		return 0;
	}
	return 1;
}

int is_sqrt(int n) {
	int i;
	for (i = 0; i <= 9; i++) {
		if (i * i == n) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int a, b, i, f;
    int s = 0;
	cin >> a >> b;
	f = 0;
	for (i = a; i <= b; i++) {
		if (i % 6 != 0) {
			continue;
		}
		if(is_prime(i /100) && is_sqrt(i % 100)) {
			if (f == 1) {
				cout << " ";}
			cout << i;
			f = 1;
            s++;
		}
	}
    cout << endl;
    cout << s;
	return 0;
}

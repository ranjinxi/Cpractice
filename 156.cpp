/*************************************************************************
	> File Name: 156.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 20时36分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#include <stdio.h>
using namespace std;

int is_sqrt(int n) {
	for(int i = 0; i < 10; i++) {
		if (i * i == n)
			return 1;
	}
	return 0;
}

int is_prime(int n) {
	if (n == 1) return 0;
	for (int i = 2; i * i <= n; i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int a, b, i, s = 0;
	cin >> a >> b;
	for (i = a; i <= b; i++) {
		if (is_sqrt(i / 100) && is_sqrt (i % 100) && is_prime(i)) {
			if(s != 0)
			cout << " ";
			cout << i;
			s++;
		}
	}
    cout << "\n";
	cout << s;
	return 0;
	
}

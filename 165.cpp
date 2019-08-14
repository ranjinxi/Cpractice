/*************************************************************************
	> File Name: 165.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 12时02分40秒
 ************************************************************************/
#include <cstdio>
#include <cmath>
#include<iostream>
using namespace std;

int main() {
    long long  c, ans = 0;
    cin >> c;
    for (long long i = 1; i < c; i++) {
        long long b = sqrt(c * c - i* i);
            if (i * i + b * b == c * c) {
                ans += 1;
            }
        }
    
    cout << (ans / 2) << endl;
    return 0;
}

/*************************************************************************
	> File Name: 161.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 11时32分03秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

double cont(int x, int n) {
    double s = x;
    for (int i = 0; i < n; i++) {
        s *= 1.06;
    }
    return s;
}

int main() {
    int x, n;
    cin >> x >> n;
    printf("%.6lf", cont(x, n));
    return 0;
}

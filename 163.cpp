/*************************************************************************
	> File Name: 163.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 11时44分00秒
 ************************************************************************/
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    printf("%.6lf", sqrt(a * a + b * b - 2 * a * b * cos(c * acos(-1) /180)));
    return 0;
}

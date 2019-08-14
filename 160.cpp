/*************************************************************************
	> File Name: 160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 11时08分19秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#include <math.h>
#define pi 3.14
using namespace std;

double sqare(int r, int h) {
    double n = 0;
    n = 2 *r * 2 * r + pi * r * r  + pi * r * h + 2 * r * h + sqrt(8 * r * r) * h;
    return n;
}

int main() {
    int r, h;
    cin >> r >> h;
    double s = sqare(r, h);
    printf("%.2lf\n", s);
    return 0;
}

/*************************************************************************
	> File Name: 179.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时18分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <cstdio>
#include <cmath>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
                
}

double f(int p, int q, double x) {
    return p * x + q;

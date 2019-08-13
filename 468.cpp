/*************************************************************************
	> File Name: 468.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时27分50秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd (b, a % b) : a);
}

int main() {
    int n, m;
    cin >> n >> m;
    printf("%d\n", gcd(m, n));
}

/*************************************************************************
	> File Name: 183.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时47分09秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int f(int x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;
    if (x > 1 && x % 2 == 1) return 3 * f((x + 1) / 2) - 1;
    if (x > 1 && x % 2 == 0) return 3 * f(x / 2) - 1;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

/*************************************************************************
	> File Name: 164.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 11时52分09秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    int n, m, s = 0;
    cin >> n >> m;
    if ( n % m != 0) { 
        s =(n / m + 1);
    } else
    s = n / m;
    cout << s << endl;
}

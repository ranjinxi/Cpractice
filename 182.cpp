/*************************************************************************
	> File Name: 182.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时43分56秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    int n;
    int p = 0;
    int m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m > p) p = m;
    }
    cout << p << endl;
    return 0;
}

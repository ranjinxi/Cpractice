/*************************************************************************
	> File Name: 467.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时21分28秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
            ans *= i;
    }
    cout << ans << endl;
}

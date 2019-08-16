/*************************************************************************
	> File Name: 15.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 16时03分52秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    long long n = 40, m = 20, ans = 1;
    while( m > 1) {
        if (n > 20) {
        ans *= n;
        n--;}
        if (m && ans % m == 0) ans /= m, m--;

    }
    printf("%lld\n", ans);
    return 0;
}

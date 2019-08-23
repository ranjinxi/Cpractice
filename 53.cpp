/*************************************************************************
	> File Name: 53.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 15时38分44秒
 ************************************************************************/
#include <iostream>
#define max_n 1000000
using namespace std;
typedef long long ll;

ll calc(ll x) {
    int sum = 0;
    int i = 1;
    while (i * i <= x) {
        if (x % i == 0) sum += (i + x / i);
        i++;
    }
    return sum;
}

int main() {
    ll ans = 0;
    for (int i = max_n; i >= 1; i--) {
        ll p = calc(i);
        if (p > ans) ans = p;
    }
    cout << ans << endl;
    return 0;
}

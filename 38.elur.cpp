/*************************************************************************
	> File Name: 38.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 14时24分15秒
 *************:***********************************************************/
#include <iostream>
#include <cmath>
#define max_n 10000
using namespace std;

int digits(int n) {
    return floor(log10(n)) + 1;
}

int calac(int x) {
    int n = 1;
    int ans = 0;
    while (digits(ans) < 9) {
        ans *= (int)pow(10, digits(x * n));
        ans += x * n;
        n++;
    }
    if (digits(ans) - 9) return 0;
    int num[10] = {0};
    num[0] = 1;
    int tmp = ans;
    while (tmp) {
        if (num[tmp % 10]) return 0;
        num[tmp % 10] += 1;
        tmp /= 10;
    }
    return ans;
}

int main() {
    int ans = 0;
    for (int i = 1; i < max_n; i++) {
        int tmp = calac(i);
        if (tmp > ans) ans = tmp; 
    }
    cout << ans << endl;
    return 0;
}


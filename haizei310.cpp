/*************************************************************************
	> File Name: haizei310.cpp
	> Author: ranjinxi 
	> Mail: r1367718372@163.com 
	> Created Time: 2019年09月29日 星期日 19时08分54秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define max_n 1000000
using namespace std;

long long  prime[max_n + 5] = {0};

void init_prime() {
    for (long long i = 2; i<= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (long long j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    init_prime();
    long long n;
    cin >> n;
    for (long long  i = 1; i <=prime[0] && prime[i] <= n; i++) {
        long long  cnt = 0;
        for (long long  j = prime[i]; j <= n; j *= prime[i]) {
            cnt += n / j;
        }
        cout << prime[i] << " " << cnt << endl;
    }
    return 0;
}

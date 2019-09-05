/*************************************************************************
	> File Name: 37.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 18时41分49秒
 ************************************************************************/
#include <iostream>
#include <cmath>
#define max_n 1000000
using namespace std;

 int is_prime[max_n + 5] = {0};
 int prime[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    } 
}

bool is_ca(int n) {
    if (n <= 10) return false;
    int x = n;
    while (x) {
        if (is_prime[x]) return false;
        x = x / 10;
    }
    int j = floor(log10(n)) + 1;
    for (int i = 0; i < j; i++) {
        if (is_prime[n]) return false;
        n = n  % (int)pow(10, j - i - 1);
    }
    return true;
}

 int main() {
    init();
    is_prime[1] = 1;
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (is_ca(prime[i]))
        { 
        sum += prime[i];
        }
    }
     cout << sum << endl;
    return 0;
 }

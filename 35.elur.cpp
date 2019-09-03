/*************************************************************************
	> File Name: 35.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 17时59分36秒
 ************************************************************************/
#include <iostream>
#include <cmath>
#define max_n 1000000
using namespace std;

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};

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

int is_cirle_prime(int n) {
    int h, j;
    h = (int)pow(10, floor(log10(n)));
    j = floor(log10(n));
    for (int i = 0; i < j; i++) {
        n = n / 10 + (n % 10)  * h;
        if (is_prime[n]) return 0;
    }
    return 1;
}


int main() {
    init();
    int num = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (is_cirle_prime(prime[i])) num++;
    }
    cout << num << endl;
    return 0;
}

/*************************************************************************
	> File Name: 188.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 14时40分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
#define max_n 1000000
using namespace std;

int prime[max_n] = {0};

int main() {
    int n, m;
    cin >> n >> m;
    int max = 0, min = 0;
    if (m > n) max = m, min = n;
    else max = n , min = m;
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    int ans = 0, index = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] >=  min) {
            index = i;
            break;
        }
    }
    for (int i = index; i <= prime[0]; i++) {
        cout << prime[i] << endl;
    }
    return 0;
}


/*************************************************************************
	> File Name: 37.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 18时41分49秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#include <math.h>
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

int is_val(int x) {
    int l = floor(log10(x)) + 1;
    int temp = x;
    for (int i = 0; i < l -1; i++) {
        int h = (int)pow(10, i);
        temp %= h;
        if(!is_prime[temp]) continue;
        return 0;
    }
    for (int i = 0; i  < l -1; i++) {
       int h = (int)pow(10,i);
        temp /= h;
        if(!is_prime[temp]) continue;
        return 0;
    }
    return 1;
}

int main() {
    int sum = 0;
    for (int i = 4; i <= prime[0]; i++) {
        if (!is_val(prime[i])) continue;
        else  sum += prime[i];
    }
    printf("%d\n", sum);
    printf ("%d\n",is_val(29));
    return 0;
 }

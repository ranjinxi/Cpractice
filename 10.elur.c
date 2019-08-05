/*************************************************************************
	> File Name: 10.elur.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 19时05分18秒
 ************************************************************************/

#include<stdio.h>
#define max_n 2000000

int prime[max_n + 5] = {0};

int main() {
    long long sum = 0;
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
             prime[++prime[0]] = i;
             sum += i; }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
           if (i % prime[j] == 0) break;
        }
    }    printf("%lld\n", sum);
    return 0;
}

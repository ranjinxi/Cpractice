/*************************************************************************
	> File Name: 180.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时28分15秒
 ************************************************************************/
#include <stdio.h>
#define max_n 400
#include <iostream>
int num[max_n + 5] = {0};

int main() {
    num[0] = num[1] = 1;
    int n ;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= num[0]; j++) num[j] *= 2;
        for (int k = 1; k <= num[0]; k++) {
            if (num[k] < 10) continue;
            num[k + 1] += num[k] / 10;
            num[k] %= 10;
            num[0] += (k == num[0]);
        }
    }
    for (int i = num[0]; i > 0; i--) {
        printf("%d", num[i]);
    }
    return 0;
}

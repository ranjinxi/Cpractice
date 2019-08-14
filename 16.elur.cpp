/*************************************************************************
	> File Name: 16.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 16时30分11秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#define max_n  1000
using namespace std;

int num[max_n + 5] = {0};

int main() {
    int c = 0;
    num[0] = num[1] = 1;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= num[0]; j++) num[j] *= i;
        for (int k = 1; k<= num[0]; k++) {
            if (num[k] < 10) continue;
            num[k+1] += num[k] / 10;
            num[k] %= 10;
            num[0] += (k == num[0]);
        }
    }
    int sum = 0;
    for (int i = num[0]; i > 0; i--) {
        sum += num[i];
        printf("%d", num[i]);
    }
    printf("\n");
    printf(" %d\n",sum);
    return 0;
}

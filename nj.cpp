/*************************************************************************
	> File Name: nj.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 20时17分38秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#define max_n 10000
using namespace std;
   
int f[max_n + 5] = {1, 1};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= f[0]; k++) {
            f[k] *= i;
        }
        for (int j = 1; j <= f[0]; j++) {
            if(f[j] < 10) continue;
            f[j + 1] += f[j] / 10;
            f[j] %= 10;
            f[0] += (j == f[0]);
        }
    }
    for (int i = f[0]; i > 0; i--) {
        printf("%d", f[i]);
    }
    printf("\n");
    return 0;
}

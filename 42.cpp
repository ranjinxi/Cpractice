/*************************************************************************
	> File Name: 42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 11时22分49秒
 ************************************************************************/
#include <inttypes.h>
#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int  w[m + 5];
    uint64_t  f[n + 5];
    for (int i = 0; i < m; i++) {
        cin >> w[i];}
    for (int i = 0; i <= n; i++) {
        f[i] = 0;
    }
    f[0] = 1;
    for (int k = 0; k < m; k++) {
        for (int j = 1; j <= n; j++) {
            if (j - w[k] >= 0) 
            f[j] += f[j - w[k]];
        }
    }
    printf("%+ "PRIu64"\n", f[n] % 9973);
    printf("% + "PRIu64"\n", f[n]);
    return 0;
}

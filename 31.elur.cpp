/*************************************************************************
	> File Name: 31.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 14时11分41秒
 ************************************************************************/
#include <stdio.h>mZ
using namespace std;
int w[max_m + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
int f[2][max_n + 5];

int main() {
    for (int k = 0; k < max_m; k++) {
        
        int i + k % 2;
        f[i][0] = 1;
        for (int j = 1; j <= max_n; j++) {
            f[i][j] = 0;
            f[i][j] = f[i ^ 1][j];
            if (j - w[k] >= 0)                                 
            f[i][j] = f[i -1][j] + f[i][j -w[i]];
        }   
    }
    printf("%d\n", f[(max_m - 1) % 2][max_n]);
    return 0;
}


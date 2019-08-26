/*************************************************************************
	> File Name: 13.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月26日 星期一 08时33分09秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char num[55];
int ans[55] = {0};

int main() {
    for (int i = 0; i < 100; i++) {
        scanf ("%s", num);
        int l = strlen(num);
        if (ans[0] < l) ans[0] = l;
        for (int k = 0; k < l; k++) {
            ans[l - k] += (num[k] - '0');
        }
        for (int j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (ans[0] == j);
        }
    }
    for (int i = ans[0]; i > ans[0] - 10; i--) {
        printf("%d", ans[i]);
    }
    return 0;
}


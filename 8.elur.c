/*************************************************************************
	> File Name: 8.elur.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 18时18分51秒
 ************************************************************************/

#include<stdio.h>
#include "ep08.h"

int main() {
    long long p = 1, zero = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        if (num[i] == '0') {
            zero += 1;
        } else {
            p *= (num[i] - '0');
        }
        if (i >= 13) {
            if (num[i -13] == '0') {
                zero -= 1;
            } else {
                p /= (num[i -13] - '0');
            }
        }
        if (zero == 0 && p > ans) ans = p;
    }
    printf("%lld", ans);
    return 0;
}

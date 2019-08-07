/*************************************************************************
	> File Name: 8.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 18时27分54秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#include "ep08.h"

using namespace std;

int main() {
    long long p = 1, zero = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        if (num[i] == '0') {
            zero += 1;
        }else {
            p *= (num[i] - '0');
        }
        if (i >= 13) {
            if (num[i -13] == '0') {
                zero -= 1;
            }else {
                p /= (num[i -13] - '0');
            }
        }
        if (zero == 0 && p > ans)
        ans = p;
    }
    printf("%lld\n", ans);
    return 0;
}

/*************************************************************************
	> File Name: haizei227.c
	> Author: ranjinxi 
	> Mail: r1367718372@163.com 
	> Created Time: 2019年09月29日 星期日 19时00分45秒
 ************************************************************************/
//快速乘 二进制拆解 选择序列 位权序列
//两数字
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long quic_mul(long long a, long long b, long long p) {
    long long tmp = a, ans = 0;
    while(b) {
        if (b & 1) ans = (ans + tmp) % p;
        tmp = tmp * 2 % p;
        b >>= 1;
    }
    return ans % p;
}

int main() {
    long long a, b, p;
    cin >> a >> b >> p;
    cout << quic_mul(a, b, p) << endl;
    return 0;
}



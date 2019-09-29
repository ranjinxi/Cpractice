/*************************************************************************
	> File Name: haizei226.c
	> Author: ranjinxi 
	> Mail: r1367718372@163.com 
	> Created Time: 2019年09月29日 星期日 18时45分09秒
 ************************************************************************/
//快速幂 选择队列 位权队列  幂的二进制拆解
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


long long quick_mod(long long a, long long b, long p) {
    long long tmp = a, ans = 1;
    while(b) {
        if (b & 1) ans = ans * tmp % p;
        tmp = tmp * tmp % p;
        b >>= 1;
    }
    return ans % p;//防止ans == 1；
}

int main() {
    long long a, b, p;
    cin >> a >> b >> p;
    cout << quick_mod(a, b, p) << endl;
    return 0;
}

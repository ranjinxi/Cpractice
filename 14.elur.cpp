/*************************************************************************
	> File Name: 14.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月26日 星期一 07时54分02秒
 ************************************************************************/
#include <iostream>
#define max_n 1000000
using namespace std;

int keep[max_n + 5] = {0};

long long get_len(long long x) {
    if (x == 1) return 1;
    if (x < max_n && keep[x]) return keep[x];
    int ret = 0; 
    if (x & 1) ret = get_len(3 * x + 1) + 1;
    else ret = get_len(x >> 1) + 1;
    if (x < max_n) keep[x] = ret;
    return ret;
}

int main() {
    int num = 0, ans = 0;
    for (int i = 1; i < max_n; i++) {
        int l = get_len(i);
        if (ans < l) ans = l, num = i;
    }
    cout << num << endl;
    return 0;
}

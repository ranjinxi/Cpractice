/*************************************************************************
	> File Name: 42.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 18时19分31秒
 ************************************************************************/
#include "42.h"
#include<iostream>
using namespace std;

int triangle(int n) {
    return n * (n + 1) / 2;
}

bool binary_search(int (*fucn)(int), int l, int r, int x) {
    if (l > r) return false;
    int mid = (l + r) >> 1;
    if (fucn(mid) == x) return true;
    if (fucn(mid) < x) l = mid + 1;
    else r = mid - 1;
    return binary_search(fucn, l, r,x);
}
int is_val(char *str) {
    int sum = 0;
    for (int i = 0; str[i]; i++) {
        sum += (str[i] - 'A' + 1);
    }
    if (binary_search(triangle, 1, sum, sum)) return 1;
    return 0;
}


int main() {
    int n = sizeof(name) / 100;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (is_val(name[i])) cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}

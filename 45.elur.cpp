/*************************************************************************
	> File Name: 45.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 18时45分55秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

typedef long long int1;

int1 pentagonal(int1 n) {
    return n * (3 * n -1) / 2;
}

int1 hexgonal(int1 n) {
    return n * (2 * n -1);
}

int1 binary_search(int1 n,int1 x) {
    int1 head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (pentagonal(mid) == x) return 1;
        else if (pentagonal(mid) < x) head = mid + 1;
        else tail = mid -1;
    }
    return -1;
}

int main() {
    int1 n = 144;
    while (binary_search(2 * n, hexgonal(n)) == -1) n++;
    printf("%lld\n", n *(2 * n -1));
    return 0;
}

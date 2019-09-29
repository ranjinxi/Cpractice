/*************************************************************************
	> File Name: 44.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 14时42分36秒
 ************************************************************************/
#include <stdio.h>

int pentagonal(int n) {
    return n * (3 * n - 1) / 2;
}

int is_Pentagonal(int x) {
    int head = 1, tail = 100000, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (pentagonal(mid) == x) return mid;
        else if (pentagonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    return 0;
}

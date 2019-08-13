/*************************************************************************
	> File Name: 44.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 14时42分36秒
 ************************************************************************/
#include <stdio.h>
#include <iostream>
#include <inttypes.h>
using namespace std;
typedef long long int1;

int1 pentagonal(int1 n) {
    return n * (3 * n - 1) / 2;
}

int is_pentagonal(int1 x, int1 n) {
    int1 head = 1, tail = n, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (pentagonal(mid) == x) return mid;
        else if (pentagonal(mid) < x) head = mid + 1;
        else tail = mid -1;
    }
    return 0;
}

int main() {
   int1 i = 1, j = 1, ans = INT32_MAX;
    while (pentagonal(j + 1) - pentagonal(i) < ans) {
        j += 1;
        i = j - 1;
        for(int i = j - 1; i >= 1 && pentagonal(j) - pentagonal(i) < ans; i--) {
            if (!is_pentagonal(pentagonal(j) + pentagonal(i))) continue;
            if (!is_pentagonal((pentagonal(j) - pentagonal(i))) ) continue;
            if (pentagonal(j) - pentagonal(i) > ans) continue;
                        ans = pentagonal(j) - pentagonal(i);
                    
                
            }
    }     
    printf("%lld\n", ans);
    return 0;
} 

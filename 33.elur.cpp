/*************************************************************************
	> File Name: 33.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 16时18分16秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
using namespace std;

int gcd(int x, int y) {
    return (y ? gcd(y, x % y) : x);
}

int is_true(int s, int t) {
    int ans = gcd(s, t);

}

int main() {
    int n = 1, m = 1;
    for (int a = 11; a < 100; a++) {
        for (int b = a + 1; b < 100; b++) {
           if(!is_true(a, b)) continue;
            n *= a;
            n *= b;
        }
    }
    printf("%d\n", m / gcd(n,m));
     is_true(11, 22);
    return 0;
}

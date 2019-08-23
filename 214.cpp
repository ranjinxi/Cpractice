/*************************************************************************
	> File Name: 214.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时42分14秒
 ************************************************************************/
#include <algorithm>
#include<iostream>
#include <cstdio>
using namespace std;

int a[35];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    sort (a, a + n);
    double sum = 0;
    int k;
    scanf ("%d", &k);
    for (int i = n - 1; i >= n - k; i--) {
        sum += a[i];
        cout << a[i] << endl;
    }
    printf ("%.2lf", sum / k);
    return 0;
}

/*************************************************************************
	> File Name: 189.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 14时42分50秒
 ************************************************************************/
#define max_n 1000000
#include <iostream>
using namespace std;

int a[max_n + 5];
int c[max_n];

int binary_search(int x, int s) {
    int right = s - 1, left = 0, mid= 0;
    while (left <= right) {
        mid =  (right + left) / 2;
        if (x == a[mid]) return mid + 1;
        else if (x < a[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return 0;
}

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> c[i];
        if (i) cout << " ";
        cout << binary_search(c[i], n);
    }
    return 0;
}


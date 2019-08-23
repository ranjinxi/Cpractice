/*************************************************************************
	> File Name: 195.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 15时35分49秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
using namespace std;
#define max_n 10000

int arr[max_n + 5] = {0};
int arr1[max_n + 5] = {0};
int binary_search(int *arr, int l, int r, int x) {
    int head = l, tail = r - 1, mid;
    while (head < tail) {
        if ((head + tail) % 2 == 0)
            mid = (head + tail) / 2;
        else 
            mid = (head + tail) / 2 + 1;
        if (x >= arr[mid]) head = mid;
        else tail = mid - 1;
    }
    return arr[head];
}

int binary_search2(int *arr, int l, int r, int x) {
    int head = l, tail = r - 1, mid;
    while (head < tail) {
        mid = (head + tail + 1) >> 1;
        if (arr[mid] <= x) head = mid + 1;
        else tail = mid;

    } 
    return arr[head];
}
void solve(int n, int k) {
    for (int i = 0; i < n; i++) cin >> arr[i];
    int x;
    for (int i = 0; i < k; i++) {
    cin >> arr1[i];}
    for (int i = 0; i < k; i++) {
        if (i) cout << " ";
    cout << binary_search(arr, 0, n, arr1[i]);
  // cout << binary_search2(arr, 0, n, x) << endl;
    }
}

int main() {
    int n, k;
    while (cin >> n >> k) solve(n, k);
    return 0;
}

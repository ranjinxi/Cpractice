/*************************************************************************
	> File Name: 186.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 20时18分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[30];
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        sum += a[sum];
        cnt++;
        if (sum >= n) break;
    }
    cout << cnt << endl;
}

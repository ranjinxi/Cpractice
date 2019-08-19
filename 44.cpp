/*************************************************************************
	> File Name: 44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 20时23分42秒
 ************************************************************************/
#include<iostream>
using namespace std;

int main() {
    int n;
    int a = 0;
    int b = 0;
    int f = 0;
    int s;
    int ans = 0;
    cin >> n;
    cin >> a;
    for (int i = 1; i < n; i++) {
        b = a;
        s = 1;
        cin >> a;
        if (b < a) {
            s += 1;
        } else {
            s = 1;
        }
        if (ans < s) ans = s;
    }
    cout << ans << endl;
}


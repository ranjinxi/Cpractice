/*************************************************************************
	> File Name: 43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 19时27分02秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n + 5][n + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i +1; j++) {
            scanf("%d",&num[i][j]);
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            num[i][j] += max(num[i + 1][j], num[i + 1][j + 1]);
        }
    }
    cout << num[0][0] << endl;
    return 0;
}

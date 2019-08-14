/*************************************************************************
	> File Name: 159.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 10时34分18秒
 ************************************************************************/
#include <stdlib.h>
#include<iostream>
#include <stdio.h>
using namespace std;

int main() {
    char w;
    cin >> w;
    int n = w - 'A' + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < abs(abs(n - i) + 1 - n); j++) {
            cout << " ";
        }
        for (int j = abs(n - i); j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        if (i != n) {
            for (int j = 0; j < abs(n - i); j++) {
                printf("%c", 'A' + j);
            }
        }
        cout << endl;
    }
    return 0;
}

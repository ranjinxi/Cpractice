/*************************************************************************
	> File Name: 157.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 19时40分07秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n -1; i++) {
        for (int j = 1; j <= n - abs(n - i) - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * abs(n - i) + 1; j++) {
      printf("%c", ('A'  + n -1 - abs(abs(n-i) + 1 - j) )) ;
        }
        cout << endl;
    }
    return 0;
}

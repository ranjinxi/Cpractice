/*************************************************************************
	> File Name: 157.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 19时40分07秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 0; j <= fabs(n-fabs(n - i) -1); j++) {
            cout << " ";
    
        }
        for (int j = 0; j < 2 * fabs(n -i) + 1; j++ ) {
            int h = fabs(n - i) + 1;
            if (j <= fabs(n -i) +1)
            printf ("%c", 'A' + i -1 + j);
            printf ("%c", 'A' + n - 1 -(j - n +i - 1));
        }
        printf("\n");
    }
    return 0;
}

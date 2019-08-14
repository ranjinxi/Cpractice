/*************************************************************************
	> File Name: 158.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时27分14秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <=  2 * n + 1; i++) {
        for (int j = 1; j <= abs(abs(n + 1 - i) - n); j++) {
            cout << " " ;
        }
        cout << abs(n + 1 - i);
        for (int j = 1; j <=2 * abs(n + 1 - i) - 1; j++) {
            cout << " " ;
        }
        if( i != n + 1)
        cout << abs(n + 1 - i) ;
        cout << endl;
    }
    return 0;
}

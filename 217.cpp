/*************************************************************************
	> File Name: 217.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 20时47分58秒
 ************************************************************************/
#include <algorithm>
#include<iostream>
#define max_n 100000
using namespace std;

int scorce[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> scorce[i];
    }
    sort(scorce, scorce + n);
    int m;
    if (n & 1) m = n / 2 + 1;
    else m = n / 2;
    for (int k = m ; k < n; k++) {
        if (scorce[k] == scorce[m - 1]) m += 1;
        else break;

    
    }
    cout << scorce[m - 1] << " " << m << endl;
    return 0;
}


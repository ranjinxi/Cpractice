/*************************************************************************
	> File Name: 243.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 18时35分56秒
 ************************************************************************/
#include <cstdio>
#include <iostream>
#define max_n 200000
using namespace std;

int s[max_n + 5], e[max_n + 5], d[max_n + 5];

int main() {
    int t;
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int mex = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d%d%d", &s[j], &e[j], &d[j]);
            if (mex < e[j]) mex = e[j];
        }
        
    }
}



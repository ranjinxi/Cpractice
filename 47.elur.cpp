/*************************************************************************
	> File Name: 47.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 19时27分54秒
 ************************************************************************/
#define max_n 1000000
#include<iostream>
using namespace std;

int is_val(int x) {
    int cnt = 0;
    while(x % 2 == 0) {
        x /= 2;
        cnt = 1;
    }
    int n = 3;
    while ( n * n < x ) {
        if (x % n == 0) cnt += 1;
        while ( x % n == 0 ) x /= n;
        n += 2;
    }
    if ( x != 1) cnt +=1;
    return cnt == 4;
}

int main() {
    int f = 0;
    int s = 1;
    for (int i = 1000; i <= max_n; i++) {
        if (!(is_val(i) &&is_val(i + 1) &&is_val(i + 2) &&is_val(i + 3))) continue;
            cout << i  << endl;
            break;
        
        
    }
    return 0;
}


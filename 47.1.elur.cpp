/*************************************************************************
	> File Name: 47.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月16日 星期五 19时27分54秒
 ************************************************************************/
#define max_n 1000000
#include<iostream>
using namespace std;

int prime[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= max_n; j += 1) {
            prime[j] += 1;
        }
    }
    return ;
}


int main() {
    init();
    for (int i = 2; i < 100; i ++) {
        cout << i << "=" << prime[i] << endl;
    }
    for (int i = 2; i < max_n; i++) {
        int flag = 1;
        for (int k = 0; k < 4 && flag; k++) {
            flag = (prime[i + k] == 4);
        }
        if (flag = 1) {cout << i - 3 << endl;
                       break;}
    }
    return 0;
}

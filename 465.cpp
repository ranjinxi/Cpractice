/*************************************************************************
	> File Name: 465.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时40分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long int1;

int digit(int1 n, int1 k) {
    if(10 * k >= n) return 0;
    int w;
    for (int i = 1; i <= k; i++) {
        w = n % 10;
        n /= 10;
    }
    return w;

}

int main() {
    int1 n, k;
    cin >> n >> k;
    int h;
    h = digit(n, k);
    cout << h << endl;
    return 0;
}

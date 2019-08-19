/*************************************************************************
	> File Name: 185.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 20时13分43秒
 ************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1;
    int n;
    cin >> n;
    while(n - 2) {
        b = a + b;
        a = b - a;
        n--;
    }
    cout << b;
}


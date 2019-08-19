/*************************************************************************
	> File Name: 184.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 20时04分29秒
 ************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 1;
    while (n > 1) {
    sum = (sum + 1) * 2;
    n--;
    }
    cout << sum << endl;
    return 0;
}

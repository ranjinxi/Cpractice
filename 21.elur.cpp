/*************************************************************************
	> File Name: 21.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 14时07分46秒
 ************************************************************************/
#include <iostream>
#define max_n 10000
using namespace std;


int amicbale(int x) {
    int n = 2;
    int sum = 1;
    while (n * n < x) {
        if (x % n == 0) 
        sum = sum + n + x / n;
        n += 1;
    }
    return sum;
}

int main() {
    int con = 0;
  for (int i = 1; i < max_n; i++) {
        if (i == amicbale(amicbale(i)) && i != amicbale(i)) {
            con += i;   
    }
    }
    cout << con << endl;
    return 0;
}


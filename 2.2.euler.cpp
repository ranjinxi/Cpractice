/*************************************************************************
	> File Name: 2.2.euler.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 15时48分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 4000000
int main(){
    int a = 1, b = 2;
    int sum = 2;
    while(a+b <max_n) {
        b = a + b;
        a = b - a;
        if((b & 1))
        sum += b;
    }
    cout << sum;
    return 0;
}

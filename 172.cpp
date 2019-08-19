/*************************************************************************
	> File Name: 172.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 18时05分33秒
 ************************************************************************/
#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string str[10];
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    sort(str, str + 10);
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}

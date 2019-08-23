/*************************************************************************
	> File Name: 212.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时09分17秒
 ************************************************************************/
#include <cstdio>
#include <algorithm>
#include<iostream>
using namespace std;

int main() {
    string name[10];
    for (int i = 0; i < 10; i++) {
        cin >> name[i];
    }
    sort(name, name + 10);
    for (int i = 0; i < 10; i++) {
        cout << name[i] << endl;
    }
    return 0;
}

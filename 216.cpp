/*************************************************************************
	> File Name: 216.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 20时26分52秒
 ************************************************************************/
#include <cstring>
#include <algorithm>
#include<iostream>
#define max_n 100
using namespace std;

int main() {
    int n;
    cin >> n;
    string name[max_n + 5];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }
    
    sort(name, name + n);
    return 0;
}


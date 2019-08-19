/*************************************************************************
	> File Name: 175.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时01分03秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    int you = 0, liang = 0 , zhong = 0, cha = 0;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m < 60) cha += 1;
        else if (m <= 79) zhong += 1;
        else if (m <= 89) liang += 1;
        else you += 1;
    }
    cout << "You "<< you << endl; 
    cout << "Liang "<< liang << endl; 
    cout << "Zhong "<< zhong << endl; 
    cout << "Cha "<< cha << endl; 
    return 0;
}

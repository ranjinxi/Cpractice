/*************************************************************************
	> File Name: 181.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时36分39秒
 ************************************************************************/
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    string str[1];
    cin >> str[0];
    for (int i= 0; str[0][i]; i++) {
        if (str[0][i] <= 'Z' && str[0][i] >= 'A' ) {
            printf("%c", str[0][i] + 32);
        }
        else 
        printf("%c", str[0][i] - 32);
    }
    return 0;
}

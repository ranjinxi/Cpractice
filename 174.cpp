/*************************************************************************
	> File Name: 174.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 18时43分15秒
 ************************************************************************/
#define max_n 1000000
#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;

char word[max_n + 5];

int main() {
    gets(word);
    for (int i = 0; i <= max_n; i++) {
        if (word[i] == ' ') cout << "%20";
        else cout << word[i];
    }
    return 0;
}

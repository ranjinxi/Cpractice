/*************************************************************************
	> File Name: 173.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 18时16分42秒
 ************************************************************************/
#include <cstring>
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    char str[100];
    int word = 0, num = 0, tab = 0, other = 0;
    gets(str);
    for (int i = 0; str[i]; i++) {
        if ((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')) word += 1;
        else if (str[i] <= '9' && str[i] >= '0') num += 1;
        else if (str[i] == ' ') tab += 1;
        else other += 1;
    }
    printf("%d %d %d %d", word, num, tab, other);
    return 0;
}

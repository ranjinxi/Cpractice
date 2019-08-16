/*************************************************************************
	> File Name: 168c.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 11时05分42秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;



int main() {
	int n;
	cin >> n;
	char name[n][100];
	for (int i = 0; i < n; i++) {
		cin >> name[i];
	}

	for (int j = 0 ; j < n; j++) {
        int len = strlen(name[j]);
		if (name[j][0] >= 'a' && name[j][0] <= 'z') name[j][0] -= 32;
        for (int i = 1; i < len; i++) {
            if (name[j][i] <= 'Z' && name[j][i] >= 'A') name[j][i] += 32;
        }
    }

    sort(name, name + n);	
	for (int i = 0; i < n; i++) {
		cout << name[i] << endl;
	}
	return 0;	
}


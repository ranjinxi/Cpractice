/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 10时31分39秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;



int main() {
	int n;
	cin >> n;
	string name[105];
	for (int i = 0; i < n; i++) {
		cin >> name[i];
	}
	
	for (int j = 0 ; j < n; j++) {
		if (name[j][0] >= 'a' && name[j][0] <= 'z') name[j][0] -= 32;
        for (int i = 1; name[j][i]; i++) {
            if (name[j][i] <= 'Z' && name[j][i] >= 'A') name[j][i] += 32;
        }
    }
	sort(name, name + n);
	for (int i = 0; i < n; i++) {
		cout << name[i] << endl;
	}
	return 0;	
}


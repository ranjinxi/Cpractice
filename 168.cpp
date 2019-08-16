/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 10时31分39秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void format_name(char *name, int k) {
	for (int j = 0 ; j < k; j++) {
        int len = strlen(name[j]);
		if (name[j][0] >= 'a' && name[j][0] <= 'z') name[j][0] -= 32;
        for (int i = 1; i < len; i++) {
            if (name[j][i] <= 'Z' && name[j][i] >= 'A') name[j][i] += 32;
        }
}

void lib_order(char *name, int k) {
    char swap[100];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k - i; j++ ) {
            if (strcmp(name[j], name[j + 1])) {
                strcpy(swap, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], swap);
            }
        }
    }        
}

int main() {
	int n;
	cin >> n;
	char name[n][100];
	for (i = 0; i < n; i++) {
		cin >> name[i];
	}
	format_name(name, n);
	lib_order(name, n);
	for (int i = 0; i < n; i++) {
		cout << name[i] << endl;
	}
	return 0;	
}

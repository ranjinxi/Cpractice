/*************************************************************************
	> File Name: 150.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月07日 星期三 17时01分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main(){
	int m, n;
	int i, j;
	cin >> m >> n;
	int a[m][n];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = m-1; j >= 0; j--) {
			if (j != m-1)
				cout <<  " ";
			cout << a[j][i];
		}
		cout << endl;
	}
	return 0;
}

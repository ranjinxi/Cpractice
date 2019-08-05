/*************************************************************************
	> File Name: 153.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 19时39分08秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
int days[7] = {6,7,1,2,3,4,5};

int main() {
	int h, q, j, m, k, y;
	cin >> y >> m >> q;
	k = y % 100;
	j = y / 100;
	h=(q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
	cout << days[h] << endl;	
	return 0;
}

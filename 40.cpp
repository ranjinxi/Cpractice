/*************************************************************************
	> File Name: 40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 20时12分16秒
 ************************************************************************/
 #include <iostream>:
#include <cstring>
#define max_n 600
using namespace std;

int s[max_n][max_n];

int main() {
	int n;
	cin >> n;
   // memset(s, 0, sizeof(s));
	s[0][0] = 0;
	s[1][1] = 0;
	s[2][1] = 1;
	s[3][1] = 1;
	for (int i = 4; i <= n; i++) {
	    	s[0][0] = 0;
        int   len1 = s[i -2][0];
        int   len2 = s[i - 3][0];
        int   s[i][0] = max(len1, len2);
        for (int j = 1; j <= h; j++) {
             s[i][h -j] += s[i -2][j];
             s[i][h - j] += s[i -3][j];
        } 
        for (int k = 1; k <= s[i][0]; k++) {
            if (s[i][k] < 10) continue;
                s[i][k + 1] += s[i][k] / 10;
                s[i][k] %= 10;
                s[i][0] == (k == s[i][0]);
        }
        
	}
    for (int i = s[0][0]; i > 0; i--) {
        cout << s[n][i];
    }
	return 0;	
}

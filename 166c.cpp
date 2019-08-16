/*************************************************************************
	> File Name: 166c.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月14日 星期三 18时55分21秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
#include <cstring>
using namespace std;

int main() {
    char str[1000];
    char cnt[1000];
    char ans[1000];
    int n;
    cin >> str;
    cin >> n;
    cin >> cnt;
    int len1 = strlen(str);
    int len2 = strlen(cnt);
    if (len1 > 100) cout << 100 << endl;
    else cout << len1 << endl;
    for (int i = 0; i < n -1; i++) {
        ans[i] = str[i];
    }
    for (int i = n - 1; i < len2 + n -1; i++) {
        ans[i] = cnt[i - n + 1];
    }
    for (int i = len2 + n -1; i < len1 + len2; i++ ) {
        ans[i] = str[i - len2];
    }
    for (int j = 0; j < len1 + len2; j++) {
        cout << ans[j];
    }
    cout << endl;
    int s = 0;
    for (int j = len1 + len2 - 1; j >= 0; j--) {
        s++;
        if (ans[j] == 'x') break;
    }
    cout << s << endl;
    return 0;
}

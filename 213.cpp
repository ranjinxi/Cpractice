/*************************************************************************
	> File Name: 213.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时18分29秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#define max_n 30
using namespace std;

int a[max_n + 5];
int b[6] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 60) b[6]++;
        else if (a[i] <= 69) b[5]++;
        else if (a[i] <= 79) b[4]++;
        else if (a[i] <= 89) b[3]++;
        else if (a[i] < 100) b[2]++;
        else b[1]++;
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << endl;
    }
    for (int i = 1; i <= 6; i++) {
        if (i - 1) cout << " ";
        cout << b[i];
    }
    return 0;
}

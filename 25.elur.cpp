/*************************************************************************
	> File Name: 25.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月28日 星期三 09时57分09秒
 ************************************************************************/
 #include <iostream>
 #define max_n 1000
 using namespace std;

int fib[3][max_n + 5] = {{0, 0}, {1, 1}, {1, 1}}; 

 int main() {
    int n = 2;
    while (fib[n % 3][0] < max_n) {
        n += 1;
        for (int i = 1; i <= fib[(n - 1) % 3][0]; i++) {
            fib[n % 3][i] = fib[(n - 1) % 3][i] + fib[(n - 2) % 3][i];
        }
        fib[n % 3][0] = fib[(n- 1) % 3][0];
        for (int j = 1; j <= fib[n % 3][0]; j++) {
            if (fib[n % 3][j] < 10) continue;
            fib[n % 3][j + 1] += fib[n % 3][j] / 10;
            fib[n % 3][j] %= 10;
            fib[n % 3][0] += (j == fib[n % 3][0]);
        }
     
    }
    cout << n << endl;
 }

/*************************************************************************
	> File Name: 33.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 16时18分16秒
 ************************************************************************/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

bool isNonTrival(int x, int y) {
    if (x > 100 || x < 10) return false;
    if (y > 100 || y < 10) return false;
    int x1, x2, y1, y2;
    x1 = x / 10, x2 = x % 10;
    y1 = y / 10, y2 = y % 10;
    if (!x1 || !x2 || !y1 || !y2) return false;
    if (x1 == y1 && x2 * y == y2 * x && x2 != 0) return true;
    if (x1 == y2 && x2 * y == y1 * x && x2 != 0) return true;
    if (x2 == y2 && x1 * y == y1 * x && x1 != 0) return true;
    if (x2 == y1 && x1 * y == y2 * x && x1 != 0) return true;
    return false;
}

int main() {
    int x = 1, y = 1, c;
    for (int i = 10; i <= 100; i++) {
        for (int j = i + 1; j <= 100; j++) {
            if (!isNonTrival(i, j)) continue;
            x *= i, y *= j;
            c = gcd(x, y);
            x /= c, y /= c;
        }
    }
    cout << y << endl;
    return 0;
}

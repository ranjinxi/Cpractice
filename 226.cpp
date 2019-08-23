/*************************************************************************
	> File Name: 226.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时54分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long ll;

ll my_pow(int a, int b, int p) {
    ll res = 1;
    while (b) {
        if (b & 1) res = ((res % p) * (a % p)) % p;
        a  = (a * a) % p;
        b >>= 1;
    }
    return res % p;
} 

int main() {
    ll a, b, c;
    while (cin >> a >> b >> c) cout << my_pow(a, b, c) << endl;
    return 0;
}

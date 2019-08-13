/*************************************************************************
	> File Name: 466.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 20时32分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int cout_prime (int x) {
    int h = 0;
  for (int i = 1; i <= x; i++) {
    int tmp = i, s = 0;
    while (tmp) {
        s = s * 10 + tmp %10;
        tmp = tmp / 10;
    }
      if (i == s)
      h++;
    

}
    return h;
}

int main() {
    int n, c;
    cin >> n;
    c = cout_prime(n);
    printf("%d\n", c);
    return 0;
}

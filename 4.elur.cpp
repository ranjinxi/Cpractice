/*************************************************************************
	> File Name: 4.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 14时23分04秒
 ************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
int is_val(int x) {
    int tmp = x , sum = 0;
    while(x) {
        sum = sum*10 + x%10;
        x = x/10;
    }
    return tmp == sum;
}

int main () {
    int ans = 0;
    int a, b;
    for (a= 100; a < 1000; a++) {
        for(b = ans/a +1; b <=a ; b++) {
            if (is_val(a*b) && ans < a*b) ans = a*b;
        }
    }
    printf("%d", ans);
    return 0;
} 

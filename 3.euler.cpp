/*************************************************************************
	> File Name: 3.euler.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 16时33分01秒
 ************************************************************************/

#include<stdio.h>
#define n 600851475143LL
//大数的素因子
int main() {
     long long i = 2, num  = n, ans = 0;
    while (i * i < num) {
        if (num % i == 0) ans = i;//ans一定是素数
        while(num % i == 0) num /= i;
        i++;
    }
    if (num != 1) ans = num;//这段代码为何要判断num的值
    printf("%lld", ans);
     return 0;}

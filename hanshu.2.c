/*************************************************************************
	> File Name: hanshu.2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 17时53分43秒
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    if (n == 1) return 1;
    return f(n-1) * n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}

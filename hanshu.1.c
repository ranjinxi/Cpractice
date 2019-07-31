/*************************************************************************
	> File Name: hanshu.1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 17时46分52秒
 ************************************************************************/

#include<stdio.h>

int f(int k, int b, int x ) {
    return k*x+b;
}

int main() {
    int k, b, x;
    scanf("%d%d", &k, &b);
    for(x = 1; x <= 100; ++x) {
        printf("%d\n", f(k, b, x));
    }
    return 0;
}

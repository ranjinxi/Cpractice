/*************************************************************************
	> File Name: 5.elur.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 14时43分18秒
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b) {
    return (b ?gcd(b, a%b) :a );
}

int main(){   
    int ans = 1;
    for (int i =1; i <= 20; i++) {
        if (ans % i == 0) continue;
        ans = ans * i / gcd(ans ,i);
    }
    printf("%d\n",ans);
    return 0;
}

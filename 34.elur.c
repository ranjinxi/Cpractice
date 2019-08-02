/*************************************************************************
	> File Name: 34.elur.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 18时04分54秒
 ************************************************************************/

#include<stdio.h>
#define max_n 2903040

int f(int x) {
    int f=1;
    for(int i=1;i<=x;i++)
        f =f*i;
    return f;
}

int is_val(int i) {
    int tmp;
    tmp = i;
    int sum = 0;
    while (i){
        sum = sum + f(i%10);
        i = i/10;
    }
    return sum == tmp;
}

int main() {
    int sum = 0;
    int i;
    for (i = 3; i <= max_n; i++) {
        if (is_val(i)) {
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;    
}

/*************************************************************************
	> File Name: 36.elur.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月02日 星期五 18时53分33秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
int is_val(int i) {
    int tmp = i;
    int i1 = i;
    int sum = 0;
    int sum2 = 0;
    while(i) {
        sum = sum*10 + i%10;
        i = i/10;
    }
    while(i1) {
        sum2 = sum2*2+ i1%2;
        i1 = i1/2;
        }
    return sum == tmp && sum2 == tmp;
}

int main(){
    int i;
    int sum = 0;
    for(i = 0; i < max_n; i++){
        if(is_val(i))
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}

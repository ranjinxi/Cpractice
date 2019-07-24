/*************************************************************************
	> File Name: 104.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 07时39分04秒
 ************************************************************************/

#include<stdio.h>

int main(){

    int a;
    int i;
    scanf("%d", &a);
    for(i=0; i < 3; i++) {
        if(a % 10 == 9 ) {
            printf("YES");
            break;
        }
        a=a/10;
    }
    if( a == 0)
    printf("No");
    return 0;

}

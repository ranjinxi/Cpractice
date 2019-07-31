/*************************************************************************
	> File Name: 110.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月24日 星期三 09时08分45秒
 ************************************************************************/

#include<stdio.h>

#include <stdio.h>

int main() {

    double X;
	scanf("%lf", &X);
	
	if(X <= 15)
        printf("%.2lf", 6*X);
	if(X > 15)
	    printf("%.2lf", 6*15+9*(X-15));
	
	return 0;

} 

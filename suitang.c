/*************************************************************************
	> File Name: suitang.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 15时41分22秒
 ************************************************************************/

#include<stdio.h>


int main (){ 

   int n;

    scanf("%d", &n);
    if(!n)  
        printf("FOOLISH\n");
    else if (n < 60 )
        printf("Fall\n");
    else if (n < 75)
        printf("Medim\n");
    else
        printf("Good\n");

   return 0;
}

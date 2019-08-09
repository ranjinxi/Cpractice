/*************************************************************************
	> File Name: digdatasum.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月07日 星期三 20时27分38秒
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>
#include <string.h>

char num[205];
int ans[205] = {0};

int main() {
    int z; 
    for (int i = 0; i < 2; i++) {
        scanf("%s", num);
         z = 0;
   for  (int i = 0; num[i] == '0'; i++) {
       	z++;
    }
    int len = strlen(num);
    if  (ans[0] < len) ans[0] = len;
    for (int i = z; i < len; i++) {
        ans[len -i]  += (num[i]- '0');
    }
    for (int i = 1; i <= ans[0]; i++) {
        if (ans[i] < 10) continue;
        ans[i +1] += ans[i]  / 10;
        ans[i] = ans[i]  % 10;
        ans[0] += (i == ans[0]);
    }
    }
    z = 0;
    for (int i = ans[0];  ans[i] == 0; i--) {
        z++;
    }
    if (z == ans[0])
        printf("0");
    for (int i = ans[0] - z; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}

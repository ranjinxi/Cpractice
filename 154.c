/*************************************************************************
	> File Name: 154.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月05日 星期一 19时50分00秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n - i + 1; j > 0; j--) {
            printf("%d", j);
            if (j != 1)
            printf(" ");
            else
            printf("\n");
        }
    }
    return 0;
}

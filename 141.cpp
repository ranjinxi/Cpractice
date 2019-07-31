/*************************************************************************
	> File Name: 141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月30日 星期二 07时29分49秒
 ************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace  std;

int main() {
	int n, i, j;
	cin >> n;
	for (i = 0; i < 2*n + 1; i++) {
		if (i < n + 1) {
			for (j = 0; j < i; j++) {
				printf(" ");
			}
			for (j = 0; j < n - i + 1; j++) {
			printf("%c", 'A'+ i + j);
		}
		for (j = n - i + 1; j < 2*n - 2*i + 1; j++) {
			printf("%c", 'A'+ n-(j-n+i));
		}
		printf("\n");	
		}
		else { 
			for (j = 0; j < 2*n - i; j++) {
			    printf(" ");
		}
		    for (j = 0; j < i - n; j++) {
			printf("%c", 'A'+ 2*n-i + j);
		}
		    for (j = i - n ; j < 2*(i - n)+1; j++) {
                printf("%c", 'A'+n -(j-i+n));
		}
		printf("\n");	
		}
    }	
	
	return 0;
}

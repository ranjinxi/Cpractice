/*************************************************************************
	> File Name: 462.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 16时29分44秒
 ************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    int m = 0, f = 0, sum = 0, d = 0;
    char c[5];
    char id[20];
    int number;
    cin >> n;
    while (n--) {
        scanf("%c", c);
        if (c[0] == 'i') {
            scanf("%s", id);
           int len = strlen(id);
            if ((id[len -2] - '0') & 1) {
                m++;
            }
            else
                f++;
        }
        else if (c[0] == 'q') {
            scanf("%d",&number);
                sum += number;
                d++;
        }
    }
    printf("%d %d %d", m, f, sum/d);
    return 0;
}

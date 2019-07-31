/*************************************************************************
	> File Name: 2.euler.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 15时04分20秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#define max_n 4000000
using namespace std;
int fb[44];

int main() {
     fb[1]=1, fb[2] =2;
   
    int i;
    int n= 2;
    while(fb[n-1]+fb[n]< max_n) {
        n++;
        fb[n] = fb[n-1]+fb[n-2];
    }
    int s = 0;
    for (i=0; i < n+1; i++) {
        if(fb[i] % 2) continue;
        s+=fb[i];
    }
    cout << s;
    return 0;
}

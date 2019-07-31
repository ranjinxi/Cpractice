/*************************************************************************
	> File Name: 1118.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 14时30分02秒
 ************************************************************************/

#include<stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
	int x;
	scanf("%d", &n);
	if(n >= 1900) {
    x=abs(n - 1900) % 12;
	switch(x) {
	case 0:printf("rat");break;
	case 1:printf("ox");break;
	case 2:printf("tiger");break;
	case 3:printf("rabbit");break;
	case 4:printf("dragon");break;
	case 5:printf("snake");break;
	case 6:printf("horse");break;
	case 7:printf("sheep");break;
	case 8:printf("monkey");break;
	case 9:printf("rooster");break;
	case 10:printf("dog");break;
	case 11:printf("pig");break;
	
	}}
	if(n < 1900) {
    x=abs(n - 1900) % 12;
	switch(x) {
	case 0:printf("rat");break;
	case 11:printf("ox");break;
	case 10:printf("tiger");break;
	case 9:printf("rabbit");break;
	case 8:printf("dragon");break;
	case 7:printf("snake");break;
	case 6:printf("horse");break;
	case 5:printf("sheep");break;
	case 4:printf("monkey");break;
	case 3:printf("rooster");break;
	case 2:printf("dog");break;
	case 1:printf("pig");break;
	
	}}
	
	
	
    return 0;
}

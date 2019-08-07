/*************************************************************************
	> File Name: 151.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月07日 星期三 17时58分06秒
 ************************************************************************/
mZZinclude <stdio.h>
#include<iostream>
using namespace std;

int rule(char x, char y) {
    if(x == y) return 3;
    if(x == 'Y' && y == 'H') return 1;
    if(x == 'H' && y == 'O') return 1;
    if(x == 'O' && y == 'Y') return 1;
    return 0;
}

int who_win(char ll, char lr, char ml, char mr) {
    if (rule(ml, ll) == 1) {
        if (rule(ml, lr )) return 1;
        if (!rule(ml, lr)) {
            if (rule(mr, lr) == 1) 
            return 1;
            return 0;
        }
    }
    if (rule(ml, ll) == 3) {
        if (rule(mr, lr) == 1) return 1;
        if (!rule(mr, lr)) return 0;
        if (rule(mr, lr) == 3) return 3;
    }
    if (rule(ml, ll) ==  0) {
        if (!rule(mr, lr)) return 0;
        if (rule(mr, ll) == 1) {
            if (rule(mr, lr)) return 1;
            return 0;
        }
    }
}

int main() {
    int i;
    char ll , lr;
    char ml, mr;
    
    scanf("%c %c\n",&ml, &mr);
    scanf("%c %c",&ll, &lr);
    i = who_win(ll, lr, ml, mr); 
    if (i == 1)
    cout << "MING" << endl;
    if (i == 0)
    cout << "LIHUA" << endl;
    if (i == 3)
    cout << "TIE" << endl;
    return 0;
}

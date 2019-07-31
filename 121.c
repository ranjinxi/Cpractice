/*************************************************************************
	> File Name: 121.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 13时45分58秒
 ************************************************************************/


#include <iostream>
using namespace std;

int main() {
	char a, b;
	cin >>  a >> b ;
	if((a = 'O' && b = 'Y') || (a = 'Y' && b == 'H') || (a == 'H' && b = 'O')) {
		cout <<  "MING" << enfl;
	}
	else if(a == b) {
		cout << "TIE" << endl;
	}
	else
		cout << "LI" << endl;
	return 0;
}

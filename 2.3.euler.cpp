/*************************************************************************
	> File Name: 2.3.euler.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 16时00分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 4000000

//滚动数组
//逆向生成，正负交替，绝对值关于零对称

int main() {
    int fb[3] = {0,1};
    int n = 1;
    int sum = 0;
    while(fb[n%3] + fb[(n-1)%3] < max_n) {
        n += 1;
        fb[n% 3] = fb[(n-1)%3] + fb[(n- 2)%3];
        if(!(fb[n%3] & 1)) sum += fb[n%3];
    }
        cout << sum;
    return 0;
}


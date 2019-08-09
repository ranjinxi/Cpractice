/*************************************************************************
	> File Name: 35.elur.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月09日 星期五 17时59分36秒
 ************************************************************************/

void init() {
    for (int i = 2; i <= max_n; i++) {
        if(!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            is_prime[prime[j] * i] = 1;
            if (prime[j] * i == 0) break;
        }
    }
}

int main() {
    init ();
         int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        :
    }
}

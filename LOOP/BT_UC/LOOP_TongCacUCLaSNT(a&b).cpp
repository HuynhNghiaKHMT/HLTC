/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#include <cmath>
using namespace std;

int SNT (int i){
    for(int j = 2; j<=sqrt(i); j++){
        if(i%j==0)
            return 0;
    }
    return 1;
}

int UCLN (int a, int b){
    while (a!=b){
        if (a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int sum_common_prime(int a, int b){
    int sum=0;
    int i=2;
    for(int i=2; i<=UCLN(a,b); i++){
        if(a%i==0 && b%i==0)
            if(SNT(i)==1)
            sum = sum + i;

    }
    if(i+1==UCLN(a,b) || sum==0)
        sum =-1;

    return sum;
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}

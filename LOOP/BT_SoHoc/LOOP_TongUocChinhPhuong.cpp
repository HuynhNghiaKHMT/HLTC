#include <iostream>

using namespace std;

int SCP(int n){
    int i = 1;
    while(i*i<=n){
        if (i*i==n)
            return 1;
        i++;
    }
    return 0;
}

int sum_all_square(int n){

    int sum = 0;
    for(int i=1; i<=n;i++){
        if(SCP(i)==1 && n%i==0)
            sum += i;
    }
        return sum;
}

int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}

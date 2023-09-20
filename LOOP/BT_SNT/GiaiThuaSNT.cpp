#include <iostream>
#include <cmath>

using namespace std;

int SNT (int n){

    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int  n;
    cin>>n;
    long long int gt = 1;

    for(int i = 2; i <= n; i++){
        if(SNT(i))
            gt = gt*i;
    }
    cout<<gt;

    return 0;
}

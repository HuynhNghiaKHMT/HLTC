#include <iostream>
using namespace std;

int main()
{
    int n,sum,q=0;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
        q++;
    }

    if(q%2!=0){
        sum = a[(n-1)/2];
        if(sum==a[0] && sum==a[n-1]) cout<<"1";
        else                         cout<<"0';
    }
    else{
        sum = a[n/2-1] + a[n/2];
        if(sum==a[0] && sum==a[n-1]) cout<<"1";
        else                         cout<<"0";
    }

    return 0;
}

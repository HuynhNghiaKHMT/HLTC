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

    if(q%2==0){
        a[n/2-1] = a[n/2-1] + a[n/2];
        for(int i = n/2; i < n; i++)
            a[i]=a[i+1];
        for(int i = 0; i < n-1; i++)
        cout<<a[i]<<" ";
    }
    else{
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
    }

    return 0;
}

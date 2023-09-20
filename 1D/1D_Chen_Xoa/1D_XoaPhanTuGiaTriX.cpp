#include <iostream>
using namespace std;

int main()
{
    int n,m,a[1000];
    cin>>n;

    for (int i = 0; i < n;i++)
        cin>>a[i];

    cin>>m;

    for(int i = 0; i < n; ){
        if(a[i]==m){
            for(int j = i; j < n-1; j++)
                a[j] = a[j+1];
        n--;
        }
        else i++;
    }
    for(int i = 0; i < n ; i++)
        cout<<a[i]<<" ";

    return 0;
}

//Cach 2:

    int b[1000],nb = 0;
    for (int i = 0; i < n;i++){
        if(a[i]!=m)
            b[nb++]=a[i];
    }

    for (int i = 0; i < nb;i++)
        cout<<b[i]<<" ";



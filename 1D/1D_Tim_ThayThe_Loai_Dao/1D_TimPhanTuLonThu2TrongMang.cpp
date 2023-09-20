#include <iostream>

using namespace std;

int check (int a[],int n){
    int maxn = a[0];
    for(int i = 0; i < n ; i++){
        if(a[i]>maxn)
            maxn = a[i];
    }
    return maxn;
}

int main()
{
    int n,dem = 0;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin>>a[i];

    int x = a[0];
    for(int i = 0; i < n ; i++){
        if(a[i]>x)
            x = a[i];
    }

    for(int i = 0; i < n ; i++){
        if(a[i]==x)
            dem++;
    }
    if(dem==n)
        cout<<"0";
    else{
    for(int i = 0; i < n; ){
        if(a[i]==x){
            for(int j = i; j < n-1; j++)
                a[j] = a[j+1];
        n = n - 1;
        }
        else i++;
    }


    cout<<check(a,n);
    }

    return 0;
}

//Cach 2:
    int n,a[1000];
    cin>>n;

    for (int i = 0; i < n;i++)
        cin>>a[i];

    int maxa = a[0];
    for (int i = 0; i < n;i++){
        if(a[i]>maxa)
        maxa = a[i];
    }

    int b[1000],nb = 0;
    for (int i = 0; i < n;i++){
        if(a[i]!=maxa)
            b[nb++]=a[i];
    }

    if(nb==0) cout<<"0";
    else{
        int maxb = b[0];
        for (int i = 0; i < nb;i++){
            if(b[i]>maxb)
            maxb = b[i];
        }
         cout<<maxb;
    }

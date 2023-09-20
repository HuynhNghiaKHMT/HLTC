#include <iostream>
using namespace std;

int check(int a[],int minn,int n){
    for( int i = 0; i < n; i++){
        if(a[i]==minn)return 0;
    }
    return 1;
}
int main()
{
    int n,a[20];
    cin>>n;

    for (int i = 0; i < n; i++)
        cin>>a[i];

     int minn = a[0];
     for( int i = 0; i < n; i++){
        if(a[i] < minn)
        minn = a[i];
     }
     int maxn = a[0];
     for( int i = 0; i < n; i++){
        if(a[i] > maxn)
        maxn = a[i];
     }

     int dem = 0;
     for( int i = minn; i < maxn; i++){
        if(check(a,minn,n)==1){
            dem++;
        }
        minn++;
    }
    cout<<dem;

    return 0;
}

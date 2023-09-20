#include <iostream>
using namespace std;

int main()
{
    int n,a[100],maxn,vt,dem=0;
    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>a[i];

    for(int i = 0; i < n; i++){
        if(a[i]<0){
            maxn = a[i];
            vt = i;
            break;
        }

    }
    for(int i = 0; i < n; i++){
        if(a[i]<0 && a[i]>maxn){
                maxn = a[i];
                vt = i;
            }
        if(a[i]>=0) dem++;
    }

    if(dem==n) cout<<"-1";
    else       cout<<vt;

    return 0;
}

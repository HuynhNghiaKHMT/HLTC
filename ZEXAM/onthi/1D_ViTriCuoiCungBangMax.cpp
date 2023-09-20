#include <iostream>

using namespace std;

int main()
{
    int n,a[10000],maxn,vt;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];

    maxn = a[0];
    for(int i = 0; i < n; i++){
        if(a[i]>=maxn){
            maxn = a[i];
            vt = i;
        }
    }
    cout<<maxn<<endl;
    cout<<vt;

    return 0;
}

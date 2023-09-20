#include <iostream>
using namespace std;

int main()
{
    int a[15], b[15],c[30],n,m,l;
    cin>>n>>m;

    l = 0;

    for(int i = 0; i < n; i++){
        cin>>a[i];
        c[l++]=a[i];
    }

    for(int i = 0; i < m; i++){
        cin>>b[i];
        c[l++]=b[i];
    }

    for(int i = 0; i < l; i++){
        cout<<c[i]<<" ";
    }

    return 0;
}

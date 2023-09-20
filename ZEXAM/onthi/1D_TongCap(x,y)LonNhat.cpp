#include <iostream>

using namespace std;

int main()
{
    int n,m,a[10000],b[10000],maxn;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        cin>>a[i];

    for(int i = 0; i < m; i++)
        cin>>b[i];
    maxn = a[0]+b[0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i]+b[j]>maxn)
           maxn = a[i]+b[j];
        }
    }

    cout<<maxn;

    return 0;
}

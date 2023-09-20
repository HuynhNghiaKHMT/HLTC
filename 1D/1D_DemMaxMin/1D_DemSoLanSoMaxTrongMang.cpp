#include <iostream>
using namespace std;

int main()
{
    int n,a[100],maxn;
    int dem=0;
    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>a[i];

    maxn = a[0];
    for(int i = 1; i < n; i++){
        if(a[i]>maxn){
            maxn = a[i];
        }
    }
    cout<<maxn<<endl;

    for(int i = 0; i < n; i++){
        if(a[i] == maxn){
            dem++;
        }
    }
    cout<<dem;

    return 0;
}

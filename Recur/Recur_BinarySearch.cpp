#include <iostream>
using namespace std;

void input(int a[],int n){
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
int findindex(int x,int a[],int l,int r){

    if(l>r) return -1;
    int mid = (l+r)/2;
    if(x==a[mid]) return mid;
    if(x<a[mid]) return findindex(x,a,l,mid-1);
    else         return findindex(x,a,mid+1,r);
}

int main()
{
    int n,m,x;
    cin>>n;
    int a[n];
    input(a,n);
    cin>>m;
    int l = 0, r = n - 1;

    for(int i = 0 ; i < m; i++){
        cin>>x;
        cout<<findindex(x,a,l,r)<<endl;
    }

    return 0;
}

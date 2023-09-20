#include <iostream>

using namespace std;

int main()
{
 int a[10000],n,ptt;
 int x,dem = 0 ;
    cin>>n;

    for(int i = 0; i < n ; i++){
        cin>>a[i];
    }

    cin>>x;
   for(int i = 0; i<n ; i++){
    if(a[i]==x)
        dem++;
    }

     cout<<dem;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
     int a[10],n,x,y;
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x>>y;
     for (int i=0;i<n;i++){
        if(a[i]==x)
            a[i]=y;
        cout<<a[i]<<endl;
     }

    return 0;
}

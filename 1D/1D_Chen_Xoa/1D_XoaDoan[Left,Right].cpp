#include <iostream>
using namespace std;

int main()
{
    int s,n,m,a[20];
    cin>>s;

    for (int i = 0; i < s;i++)
        cin>>a[i];

    cin>>n>>m;
    int dem = 0;
    for( int i = n; i <= m; i++)
        dem++;

    for( int i = n; i < s-dem; i++){
        a[i]=a[i+dem];
    }
    for (int i = 0; i < s-dem;i++)
        cout<<a[i]<<" ";

    return 0;
}

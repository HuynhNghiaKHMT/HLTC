#include <iostream>
using namespace std;

int main()
{
    int n,a[100];
    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++){
        if(i%2!=0)
            cout<<a[i]<<" ";
    }
    return 0;
}

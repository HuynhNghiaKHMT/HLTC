#include <iostream>

using namespace std;

int main()
{
    int n,p,k;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    cin>>p>>k;
    for(int i = p; i < n; i++){
        a[i] = a[i+k];
    }
    for(int i = 0; i < n-k; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}

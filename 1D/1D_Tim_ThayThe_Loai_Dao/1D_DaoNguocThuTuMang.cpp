#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Mang da nhap:"<<endl;
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";

    int ptt;
    for(int j = 0; j < n/2; j++){
        ptt = a[j];
        a[j] = a[n-1-j];
        a[n-1-j] = ptt;
    }

    cout<<endl<<"Mang sau khi dao:"<<endl;
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}

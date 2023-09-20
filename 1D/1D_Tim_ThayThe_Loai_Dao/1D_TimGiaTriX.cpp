#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n, a[100];
    int x;
    cin>>n;
     for (int i = 0; i < n; i++){
        cin>>a[i];
     }
     cin>>x;
     for (int i = 0; i < n; i++){
        if(a[i]==x){
            cout<<x<<" xuat hien dau tien tai vi tri thu "<<i+1<<" trong mang";
            break;
        }

        if (i==n-1)
            cout<<"Khong tim thay "<<x;

     }


    return 0;
}

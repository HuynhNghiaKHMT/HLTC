#include <iostream>
using namespace std;

void check (int n, int a[])
{
    int c = 0;
    int l = 0;

    for (int i=0; i < n; i++){
        if (a[i]%2==0)
            c++;
        else
            l++;
    }

    if (l==0) cout<<"Mang chua toan so chan";
    if (c==0) cout<<"Mang chua toan so le";
    if (c!=0 && l!=0) cout<<"Mang khong chua toan so chan hay so le";
}

int main()
{
    int n,a[10000];
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    check(n,a);


}

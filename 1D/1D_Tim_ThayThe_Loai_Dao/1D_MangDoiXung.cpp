#include <iostream>
using namespace std;

int check(int a[],int n){

    for (int i = 0; i < n/2; i++){
        if(a[i]!=a[n-1-i])
            return 0;
    }
    return 1;
}

int main()
{
    int n,a[10000];
    cin>>n;

    for (int i = 0; i < n; i++)
        cin>>a[i];

    if(check(a,n)==1) cout<<"array is palindrome";
    else              cout<<"array is not palindrome";

    return 0;
}

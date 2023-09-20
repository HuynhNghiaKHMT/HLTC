#include <iostream>

using namespace std;

int main()
{

    int n,S,tong;
    cin>>n;

    S = 0;
    int i = 1;
    tong = 0;

    while (i<=n)
{
    S = i;
    tong += S;
    i++;

    cout<<S<<" ";
}

    cout<<tong;

    return 0;
}



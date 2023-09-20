#include <iostream>

using namespace std;

int main()
{
    int n,N;
    cin>>n;

    N=n%360;

    if (N>0 && N<=90)
        cout<<"4";
    else if (N>0 && N<=180)
        cout<<"3";
    else if (N>0 && N<=270)
        cout<<"2";
        else
        cout<<"1";

    return 0;
}

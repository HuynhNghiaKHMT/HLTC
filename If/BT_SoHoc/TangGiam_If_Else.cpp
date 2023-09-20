#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

     if (a>b || (a+b)%2!=0)
        cout<<"TRUE";
     else
        cout<<"FALSE";

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t = 0;
    int p = 1;
    int p1;


    if (t ==0 && p == 1)
        cout<<p<<" ";

    while ((t + p)<=n){
       p1 = t + p;
       t = p;
       p = p1;

       cout<<p<<" ";
    }


    return 0;
}

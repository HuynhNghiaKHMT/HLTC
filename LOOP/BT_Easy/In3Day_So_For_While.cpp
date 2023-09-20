#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {cout<< i << " ";
     i++;}
    cout<<endl<<endl;

     i = 10;
    while (i<=n)
        {cout<<i<<" ";
        i += 5;}
    cout<<endl<<endl;

    i = 20;
    while (i<=n)
        {cout<<i<<" ";
        i += 10;}

    return 0;
}



//for(int i = 1; i <= n; i++)
//        cout<<i<<" ";
//    cout<<endl<<endl;
//    for(int i = 10;i <= n; i += 5 )
//
//        cout<<i<<" ";
//    cout<<endl<<endl;
//    for(int i = 20;i <= n; i += 10 )
//
//        cout<<i<<" ";

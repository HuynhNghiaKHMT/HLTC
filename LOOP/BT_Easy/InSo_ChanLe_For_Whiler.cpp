#include <iostream>

using namespace std;

int main()

{
    int n;
    cin>>n;

    int i = 2;
    while(i <= n)
        {cout<<i<<" ";
        i += 2;}
    cout << endl << endl;

    i -= 2;
    while (1 <= i)
    {
        if (i % 2 != 0)
        cout<<i<<" ";
        i--;
    }
    cout << endl << endl;
    cout<<"done";

    return 0;
}


// cin>>n;
//    for(int i = 2 ; i <= n ; i += 2)
//        cout<<i<<" ";
//    cout<<endl<<endl;
//    for(int i = n ; 1 <= i; i -= 1)
//    {
//        if (i%2 != 0)
//        cout<<i<<" ";
//    }
//    cout<<endl<<endl<<"Done";

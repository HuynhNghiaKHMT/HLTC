#include <iostream>

using namespace std;

int main()
{
    int n;
    char a='+',b='-';
    cin>>n;

    cout<<endl;
    int i=1;
    while (i<=n)
    {
    cout<<a<<" ";
    i++;
    }

    i=1;
    cout<<endl<<endl;
    while (i<=n)
    {
    cout<<b<<" ";
    i++;
    }

    i=1;
    cout<<endl<<endl;
    while (i<=n)
    {
    cout<<a<<" "<<b<<" ";
    i++;
    }

    return 0;
    }


 int n;
    cin>>n;
    char a='+',b='-';


    for(int i=1;i<=n;i++) {cout<<a<<" ";}
        cout<<endl<<endl;
    for(int i=1;i<=n;i++) {cout<<b<<" ";}
        cout<<endl<<endl;
    for(int i=1;i<=n;i++) {cout<<a<<" "<<b<<" ";}



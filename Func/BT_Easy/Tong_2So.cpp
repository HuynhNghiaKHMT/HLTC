#include <iostream>

using namespace std;

int sum (int a,int b)
{
   return a+b;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"The sum of "<<x<<" and "<<y<<" is "<<sum(x,y);


    return 0;
}

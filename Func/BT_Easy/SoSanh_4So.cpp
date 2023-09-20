#include <iostream>

using namespace std;


int inputNumber();
int larger(int x, int y);
int compareFour(int x, int y, int z, int w);

int inputNumber()
{
    int n;
    cout<<"Enter a positive integer:";
    do{
        cin>>n;
        if (n<0)
        cout<<"\nInvalid number, please try again:";
    }
    while (n<0);
    return n;
}

int larger(int x, int y)
{   if(x>y) return x;
            return y;
}

int compareFour(int x, int y, int z, int w)
{
  return larger(larger(x,y),larger(z,w));
}

int main()
{
    int a, b, c, d;
    a=inputNumber();cout<<endl;
    b=inputNumber();cout<<endl;
    c=inputNumber();cout<<endl;
    d=inputNumber();cout<<endl;
    cout<< "Numbers entered: "<<a<<", "<<b<<", "<<c<<", "<<d<<endl;
    cout <<"The largest number is "<<compareFour(a, b, c, d);
    return 0;
}

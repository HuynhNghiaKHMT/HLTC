#include <iostream>

using namespace std;

double larger(double x,double y)
{
    if (x<y) return y;
        return x;
}
double compareThree(double x, double y, double z)
{
    return larger(larger(x,y),z);
}


int main()
{
    double a,b,c;
    cout<<"Enter 03 numbers:\n";
    cin>>a>>b>>c;
    cout<< "Numbers entered: "<<a<<", "<<b<<", "<<c<<endl;
    cout<<"The largest number is "<< compareThree(a,b,c);
    return 0;
}

//double sumThree(double a,double b,double c)
//{
//   if(a>b && a>c) return a;
//   else if(b>a && b>c) return b;
//    else   return c;
//}


#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
int main()
{
    double a,b,c,Delta,x1,x2;
    cin>>a>>b>>c;

    Delta = b*b-4*a*c;
    x1=(-b-sqrt(Delta))/(2*a);
    x2=(-b+sqrt(Delta))/(2*a);

    if (a==0)
        {if (b==0)
           {if (c==0) cout<<"INF";
           else      cout<<"IE";}
        else  cout<<-c/b;}
    else
        if (Delta<0) cout<<"IE";
        else
            if (Delta>0)
            (x1>x2)? cout<<x2<<" "<<x1:cout<<x1<<" "<<x2;
        else cout<<-b/(2*a)<<-b/(2*a);

    return 0;
}

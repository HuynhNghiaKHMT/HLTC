
//Cach tinh bang goc
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    float A,B,C;
    cin>>a>>b>>c;
    A = (b*b+c*c-a*a)/2*b*c;
    B = (a*a+c*c-b*b)/2*a*c;
    C = (b*b+a*a-c*c)/2*b*a;
    if (((a*a+b*b>=c*c)&&(a*a+c*c>=b*b))&&(b*b+c*c>=a*a))
      if ((A==0 || B==0) || C==0)   cout<<"VUONG";
      else if (A==B && A==C)        cout<<"DEU";
      else if ((A==B||B==C)||C==A)  cout<<"CAN";
      else if ((A<0 && B<0) && C<0) cout<<"NHON";
           else                     cout<<"TU";
    else                            cout<<"KHONG";

    return 0;
}

#include<iostream>

using namespace std;

int main()
{

    int a,b,c;
    cin>>a>>b>>c;

    if (a<b+c && b<a+c && c<a+b){

        if (a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"VUONG";
        else if(a==b && b==c)
            cout<<"DEU";
        else if(a==b || a==c || b==c)
            cout<<"CAN";
        else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
            cout<<"TU";
        else
            cout<<"NHON";
    }
    else cout<<"KHONG";

    return 0;

}



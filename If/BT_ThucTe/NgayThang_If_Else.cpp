#include <iostream>

using namespace std;

int main()
{
    int t,N,n=28;
    cin>>t>>N;

    if (((t>12)||(t<=0)) && ((N<=1975)||(N>=2019)))
      cout<<"Thang khong hop le.Nam khong hop le.";
    else if ((t>12)||(t<=0))
      cout<<"Thang khong hop le.";
    else if ((N<=1975)||(N>=2019))
      cout<<"Nam khong hop le.";
    else
    switch (t)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout<<31;break;

        case 4:
        case 6:
        case 9:
        case 11: cout<<30;break;

        case 2:

             if ((N % 4 == 0 && N % 100 != 0) || (N % 100 == 0 && N % 400 == 0))
             n=29;
             cout<<n;
    }

    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

//BT1
int main ()
{
    int n,x;
    cin>>n>>x;
    float tong = 0;
    int mau = 0;

    for (int i=1; i<=n; i++){

    mau = (i-1)+ pow(i,i+1);

    tong = tong + pow((float)1/mau,x);
    }
    cout<<tong;

    return 0;
}

//BT2
int main ()
{
    int n,x;
    cin>>n>>x;
    float tong = 0;
    int mau,tu;

    for (int i=1; i<=n; i++){

    tu = (i-2)+(i-1);

    mau = (i-1)+ i;

    tong = tong + pow((float)tu/mau,x);
    }
    cout<<tong;

    return 0;
}

//BT3
//c1
int main ()
{
    int n;
    cin>>n;
    double can;

    can = sqrt(n);
    for (int i=n; i>1; i--){

        can = (i-1) + can;
        can = sqrt(can);
    }
    cout<<can;

    return 0;
}
//c2
int main ()
{
    int n;
    cin>>n;
    double can;

    for (int i=n; i>0 i--){

        can += i;
        can = sqrt(can);
    }

    cout<<can;

    return 0;
}


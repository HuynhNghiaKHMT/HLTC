
//LAM TRON SO THUC
#include <iostream>
//#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    float S,p;
    cin>>a>>b>>c;
    p = (float)(a+b+c)/2;
    S = sqrt((p*(p-a)*(p-b)*(p-c)));
    cout<< (int(S*100+0.5))*0.01;
//cout<<round(S*100)/100;
    return 0;
}



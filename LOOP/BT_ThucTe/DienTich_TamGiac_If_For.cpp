#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,a,b,c;
     double p,s;
    cin>>n;
    cout<<endl;

    int i = 1;
    while (i<=n){
        cin>>a>>b>>c;
        if (a+b>c && a+c>b && b+c>a){
            p = (a+b+c)/2.0;
            s = sqrt(p*(p-a)*(p-b)*(p-c));
            cout.precision(10);
            cout<<s;
        }
        else
            cout<<"NOT TRIANGLE";
        i++;
        cout<<endl<<endl;
    }


    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    double S1 = 1;
    double S2 = 1;
    double S3 = 1;
    int ptt1=1;


    for(int i=1;i<=n;i++){

        S1 = S1 + pow(x,i);

        S2 = S2 + pow(x,(2*i));

        ptt1 = ptt1*i;
        S3 = S3 + pow(x,i)/ptt1;

    }


        cout<<S1<<endl;
        cout<<S2<<endl;
        cout<<S3<<endl;
    return 0;
}


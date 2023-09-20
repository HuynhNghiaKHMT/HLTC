#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    double S1 = 0;
    double S2 = 0;
    double S3 = 0;
    int ptt1=1;
    int ptt2=0;

    for(int i=1;i<=n;i++){

        S1 = S1 + pow(i,i);


        ptt1 = ptt1*i;
        S2 = S2 + ptt1;

        ptt2 = ptt2+i;
        S3 = S3 +  1.0/ptt2;


    }
        cout<<S1<<endl;
        cout<<S2<<endl;
        cout<<S3<<endl;
    return 0;
}

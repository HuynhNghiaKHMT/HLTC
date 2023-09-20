#include <iostream>

using namespace std;

double larger(double x, double y)
{
    if (x>y)
        return x;
        return y;
}

int main()
{
    int n;
    double num, maxNum;
    cin>>n;
    cout<<"Enter "<<n<<" numbers: "<<endl;


    cin>>maxNum;
    for ( int i = 1; i<= n-1;i++){
        cin>>num;

        maxNum = larger (maxNum,num);
    }

    cout<<"The largest number is "<<maxNum;

    return 0;
}

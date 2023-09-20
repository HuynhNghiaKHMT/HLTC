#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0 ){
            if(i!=n/i)
                sum += i + n/i;
            else
                sum += i;
        }
    }
    cout<<sum;

    return 0;
}

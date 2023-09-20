#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n, a[10000];
    double sum = 0;
    double un = 0;
    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        sum = sum + a[i]/n;
    for(int i = 0; i < n; i++)
        un = un + pow(a[i] - sum,2)/n;

    cout.precision(10);
    cout<< sqrt(un);

    return 0;
}

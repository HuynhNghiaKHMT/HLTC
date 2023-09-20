#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m,n,k;
    int s = 0;
    int dem = 0;
    cin>>m>>n;

    while(m!=0 || n!=0){
        k = m%10 + n%10;
        s = (k%10)*pow(10,dem) + s;
        m/=10;
        n/=10;
        dem++;
    }
    cout<<s;

    return 0;
}


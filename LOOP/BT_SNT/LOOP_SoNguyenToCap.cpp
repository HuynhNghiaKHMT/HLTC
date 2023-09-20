#include <iostream>
#include <math.h>

using namespace std;

int SNT(int n)
{
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
 {
    int n,i;
    cin>>n;
    int dem = 0;

    for (int i = 2; i < n-2; i++) {
        if (SNT(i) && SNT(i+2))
            if (i+2<n){
            cout << i << ", " << i+2 << endl;
            dem ++;
            }
    }
    cout<<"Tong: "<<dem<<" cap so sinh doi < "<<n;
}

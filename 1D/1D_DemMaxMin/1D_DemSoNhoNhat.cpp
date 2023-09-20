#include <iostream>

using namespace std;


int main()
{
    int n, a[10000];
    int dem = 1;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    int min=a[0];
    for (int i = 1; i < n; i++){
        if (min>a[i]){
            min = a[i];
            //
         }
        else if (min==a[i]){
            dem++;
        }
    }

    cout<<min<<" "<<dem;

    return 0;
}

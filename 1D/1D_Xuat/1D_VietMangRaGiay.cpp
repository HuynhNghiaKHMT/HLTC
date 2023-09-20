#include <iostream>
#include <math.h>
using namespace std;

int ham_x(int a[], int n){

    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i]<=0)
            dem++;
        while(abs(a[i])>0){
            dem++;
            a[i]/=10;
        }
    }
    return dem;
}

int main()
{
    int n,a[100000],dem=0;
    cin>>n;

    for(int i = 0; i < n; i++)
        cin>>a[i];

    cout<<ham_x(a,n);



    return 0;
}




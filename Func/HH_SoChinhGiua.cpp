#include <iostream>
#include <cmath>
using namespace std;

int SCG(long long int a){
    int num,SCG;
    int dem = 0;

    for(int j = a; j>0; j/=10){
            dem++;
    }
        if (dem%2!=0) {
            num = a/(pow(10,(dem-1)/2));
            SCG = num%10;
        }
        else{
            num = a/(pow(10,(dem-2)/2));
            SCG = num%100;
        }
    return SCG;
}


int main()
{
    int n;
    cin>>n;
    long long int a[n];
    int dem;

    for(int i = 0; i< n; i++){
            cin>>a[i];
    }

    int maxSCG = SCG(a[0]);
    for(int i = 1; i< n; i++){

           if (SCG (a[i])> maxSCG){
                maxSCG = SCG (a[i]);
                dem = i;
           }
    }
    cout<<a[dem];

    return 0;
}

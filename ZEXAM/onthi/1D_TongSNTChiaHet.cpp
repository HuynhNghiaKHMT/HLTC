#include <iostream>
#include <math.h>

using namespace std;

int SNT (int n){
    if(n<2) return 0;
    else{
        for(int i = 2; i <=sqrt(n); i++){
            if(n%i==0) return 0;
        }
    }
    return 1;
}
int main()
{
    int n,a[100],sum = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        if(SNT(a[i])==1)
                sum = sum + a[i];
    }

    if(sum==0) cout<<"Khong co so nguyen to";
    else{
        int i = 0;
        for( ; i < n; i++){
            if(SNT(a[i])==1){
                if(sum%a[i]==0){
                    cout<<"YES";
                    break;
                }
            }
        }
        if(i==n)   cout<<"NO";
    }

    return 0;
}

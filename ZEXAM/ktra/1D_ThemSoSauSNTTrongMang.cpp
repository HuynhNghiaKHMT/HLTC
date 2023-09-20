#include <iostream>
#include <cmath>
using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
int check(int x){
    if(x<2) return 0;
    else{
        for(int i = 2; i <= sqrt(x); i++){
            if(x%i==0)  return 0;
        }
        return 1;
    }
}
void BonusArray(int a[],int n){
    int b[100],nb = 0;
    for(int i = 0; i < n; i++){
        if(check(a[i])==1){
            b[nb++] = a[i];
            b[nb++] = 0;
        }
        else b[nb++] = a[i];
     }
    for(int i = 0; i < nb; i++)
        cout<<b[i]<<" ";
        cout<<endl;
    for(int i = 0; i < nb; i++){
        if(b[i]==0)
        cout<<i<<" ";
    }
}
int main()
{
    int a[100],n;
    inputArray(a,n);
    BonusArray(a,n);


    return 0;
}

//Cach 2:
    for(int i = 0; i < n ; i++){
        if(check(a[i])==1){
            n++;
            for(int j = n ; j > i +1 ; j--){
                a[j]=a[j-1];
            }
            a[i+1]=0;
        }
    }
    for(int i = 0; i < n;i++)
        cout<<a[i]<<" ";

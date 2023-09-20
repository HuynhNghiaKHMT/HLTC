#include <iostream>
#include <math.h>
using namespace std;

int check(int m){
    if(m<2) return 0;
    else{
        for(int j = 2; j <= sqrt(m); j++)
            if(m%j==0) return 0;
    }
    return 1;
}
void input(int a[],int &n){
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
void output(int b[],int nb){
    for (int i = 0; i < nb; i++)
        cout<<b[i]<<" ";
}
int main()
{
    int n,a[50];
    input(a,n);
    int b[50],nb = 0,dem = 0;
    for (int i = 0; i < n; i++){
            if(check(a[i])==1){
                b[nb++]=a[i];
                dem++;
            }

    }
    cout<<dem<<endl;
    output(b,nb);

    return 0;
}

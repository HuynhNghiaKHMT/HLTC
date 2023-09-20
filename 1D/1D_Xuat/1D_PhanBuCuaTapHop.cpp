#include <iostream>
using namespace std;

int main()
{
    int n,m,a[1000],b[1000],flat;
    cin>>n>>m;

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < m; i++){
        cin>>b[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i]!=b[j])
                flat = 0;
            else{
                flat = 1;
                break;}
        }
       if(flat==0) cout<<a[i]<<"  ";
    }

    return 0;
}
//Cach 2:
////Ham ktra:
int check(int x,int b[],int m){
    for (int i = 0; i < m;i++){
        if(x==b[i]) return 0;
    }
    return 1;
}
////Than

    int c[1000],nc = 0;
    for (int i = 0; i < n;i++){
        if(check(a[i],b,m)==1)
            c[nc++]=a[i];
    }
    for (int i = 0; i < nc;i++)
        cout<<c[i]<<" ";


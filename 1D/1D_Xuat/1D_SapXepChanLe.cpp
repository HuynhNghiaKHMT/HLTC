#include <iostream>
using namespace std;

int main()
{
    int n,m,ptt,q;
    cin>>n>>m;
    int a[n],b[m],c[m+n];
    q = 0;

    for(int i = 0; i < n; i++){
            cin>>a[i];
            c[q++] = a[i];

    }
    for(int i = 0; i < m; i++){
            cin>>b[i];
            c[q++] = b[i];
    }
    for(int i = 0; i < q; i++)
            cout<<c[i]<<" ";


//    for(int i = 0; i < n-1; i++){
//        for(int j = i+1; j < n; j++){
//            if(a[j]<a[i]){
//            ptt = a[i];
//            a[i]= a[j];
//            a[j]= ptt;
//            }
//        }
//    }


    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int m,n,k=0;
    cin>>m>>n;
    int a[m],b[n],c[m+n];
    for(int i = 0; i < m; i++){
        cin>>a[i];
        c[k++]=a[i];
    }
    for(int i = 0; i < n; i++){
        cin>>b[i];
        c[k++]=b[i];
    }

    for(int i = 0; i < k; i++){
        for(int j = i+1; j < k;j++){
            if(c[j]<c[i]){
            int ptt = c[j];
            c[j] = c[i];
            c[i] = ptt;
            }
        }
        cout<<c[i]<<endl;

    }
    return 0;
}

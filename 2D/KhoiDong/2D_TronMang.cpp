#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[100],b[100],c[100];
    int m,n,ptt,dem;
    cin>>m>>n;

    for(int i = 0; i < m; i++) {
        cin>>b[i];
        a[dem] = b[i];
        dem++;
    }
    for(int i = 0; i < n; i++) {
        cin>>c[i];
        a[dem] = c[i];
        dem++;
    }
    cout << "Mang sau khi tron: ";
    for(int i = 0; i < dem; i++){
        for(int j = i+1; j< dem+1; j++){
            if (a[i]>a[j]){
                ptt = a[i];
                a[i] = a[j];
                a[j] = ptt;
            }
        }
    cout<<a[i]<<" ";
    }

   return 0;
}

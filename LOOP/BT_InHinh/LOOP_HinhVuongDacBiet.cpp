#include <iostream>
using namespace std;

void hinhVuong_DacBiet_2(){
    int n;
    cin>>n;

    if(n<3 || n>20) cout<<"Khong thoa dieu kien nhap.";
    else
    for(int i = 1; i <= n; i++ ){
        for(int j = 1; j<=n; j++){

        if(i>=1 && i<n && j==1){
            cout<<"# ";
            continue;
        }
        if( i==1 && j>1 && j<=n) cout<<"* ";
        if(j==n && i>1) cout<<"^ ";
        if(i==n && j<n ) cout<<"~ ";

        if(i>1 && i<n){
            if (i==j) cout<<"& ";
            else cout<<"  ";
        }
        }
    cout<<endl;
    }
}

int main() {
    hinhVuong_DacBiet_2();
    return 0;
}

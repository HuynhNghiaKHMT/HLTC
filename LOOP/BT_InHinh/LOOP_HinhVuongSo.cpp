#include <iostream>
using namespace std;

void hinhVuong_DacBiet_4(){

    int n;
    cin>> n;

    if(n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else
        for (int i = 0; i < n; i++){
            for (int j = 1; j <= n; j++ ){
                cout<<i*n+j;
                if((i*n+j)<10) cout<<"    ";
                else cout<<"   ";
            }
            cout<<endl;
        }
}

int main() {
    hinhVuong_DacBiet_4();
    return 0;
}

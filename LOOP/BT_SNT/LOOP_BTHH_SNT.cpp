#include <iostream>
#include <math.h>

using namespace std;

int kiemTraSNT(int n){
    if(n<2) return 0;
    else{
        for(int i = 2; i <= sqrt(n);i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
}
void lietKeSNT(int n){
    int dem = 0;
    for(int i = 2; i < n; i++){
        if(kiemTraSNT(i)==1){
            cout<<i<<" ";
            dem ++;
        }
    }
    if(dem==0) cout<<"Khong co";
}
int demSNT(int n){
    int dem = 0;
    for(int i = 2; i < n; i++){
        if(kiemTraSNT(i)==1)
            dem++;
    }
    return dem;
}
int SNTNhoHon(int n){

    for(int i = n-1; i >= 2; i--){
        if(kiemTraSNT(i)==1)
            return i;
    }
    return -1;
}
int SNTLonHon(int n){
    int i = 1;
    while (1){
        if(kiemTraSNT(n+i)==1)
            return n+i;
        i++;
    }
    return -1;
}
void uocLaSNT(int n){
    int dem  = 0;
    for(int i = 2; i < n; i++){
        if(kiemTraSNT(i)==1  && n%i==0){
        cout<<i<<" ";
        dem++;
        }
    }
    if (dem == 0) cout<<"Khong co";
}

int main()
{
    int n; cin>>n;

    if (kiemTraSNT(n)==1)
        cout << n<<" la so nguyen to."<<endl;
    else
        cout << n<<" khong la so nguyen to."<<endl;

    cout << "Cac so nguyen to < "<<n<< " : ";
    lietKeSNT(n);
    cout<<endl;

    cout << "Dem so nguyen to < "<<n<< " : "<<demSNT(n)<<endl;

    cout << "So nguyen to dau tien < "<<n<<" va co gia tri gan voi "<<n<<" nhat: "<<SNTNhoHon(n);
    if (SNTNhoHon(n)==-1)
       cout <<" (Khong co)";
    cout <<endl;
    cout << "So nguyen to dau tien > "<<n<<" va co gia tri gan voi "<<n<<" nhat: "<<SNTLonHon(n);
    if (SNTLonHon(n)==-1)
       cout <<" (Khong co)";
    cout <<endl;

    cout << "Liet ke cac uoc so cua "<<n<< " la so nguyen to (khong ke n) : ";
    uocLaSNT(n);
    cout<<endl;

    return 0;
}

#include <iostream>
using namespace std;

struct PS{
    int tu,mau;
};
int UCLN(int a,int b){
    a = abs(a);
    b = abs(b);
    while(a!=0 && b!=0){
        if(a>b) a = a-b;
        else    b = b-a;
    }
    return a+b;
}
PS cong (PS a, PS b){
    PS kq;
    kq.tu = a.mau*b.tu+a.tu*b.mau;
    kq.mau = a.mau*b.mau;
    return kq;
}
PS tru (PS a, PS b){
    PS kq;
    kq.tu = a.tu*b.mau-a.mau*b.tu;
    kq.mau = a.mau*b.mau;
    return kq;
}
PS nhan (PS a, PS b){
    PS kq;
    kq.tu = b.tu*a.tu;
    kq.mau = a.mau*b.mau;
    return kq;
}
PS chia (PS a, PS b){
    PS kq;
    kq.tu = a.tu*b.mau;
    kq.mau = a.mau*b.tu;
    return kq;
}
void rutgon(PS &a){
    int uc = UCLN(a.tu,a.mau);
    a.tu = a.tu/uc;
    a.mau = a.mau/uc;
}
int main()
{
    PS a,b;
    cin>>a.tu>>a.mau>>b.tu>>b.mau;

    char x;
    cin>>x;

    if( x == '/' && a.mau == 0 ) cout<<"Phep chia khong xac dinh";
    else if(a.tu==0 && b.tu==0)  cout<<"Phep chia khong xac dinh";
    else if(a.tu==0 ||a.mau==0 ) cout<<"Khong thoa yeu cau bai toan";
    else if(b.tu==0 ||b.mau==0 ) cout<<"Khong thoa yeu cau bai toan";
    else{
        PS kq;
        switch(x){
            case '+': kq = cong(a,b); break;
            case '-': kq = tru(a,b); break;
            case '*': kq = nhan(a,b); break;
            case '/': kq = chia(a,b); break;
        }
        rutgon(kq);

        if((kq.tu<0 &&kq.mau<0) || (kq.tu>0 && kq.mau>0) )
            cout<<abs(kq.tu)<<"/"<<abs(kq.mau);
        else if(kq.tu>0 && kq.mau<0)
            cout<<-kq.tu<<"/"<<abs(kq.mau);
        else
            cout<<kq.tu<<"/"<<kq.mau;
    }

    return 0;
}

#include <iostream>
#include <time.h>
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
void rutgon(PS &a){
    int uc = UCLN(a.tu,a.mau);
    a.tu = a.tu/uc;
    a.mau = a.mau/uc;
}
int main()
{
    int n;
    cin>>n;

    PS a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i].tu>>a[i].mau;
    }

    for(int i = n-1; i >=0 ;i--){

        if(a[i].tu ==0 && a[i].mau != 0)
            cout<<a[i].tu<<endl;
        else if (a[i].mau == 0)
            cout<<"Khong thoa yeu cau bai toan"<<endl;
        else
        {
            rutgon(a[i]);

            if(a[i].mau==1)
                cout<<a[i].tu<<endl;
            else if(a[i].mau==-1)
                cout<<-a[i].tu<<endl;
            else if(a[i].tu>0 && a[i].mau<0)
                cout<<-a[i].tu<<"/"<<abs(a[i].mau)<<endl;
            else if(a[i].tu<0 && a[i].mau<0)
                cout<<-a[i].tu<<"/"<<-a[i].mau<<endl;
            else
                cout<<a[i].tu<<"/"<<a[i].mau<<endl;
        }
    }

    return 0;
}

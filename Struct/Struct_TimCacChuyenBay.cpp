#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;

struct NGAY{
    int day,month,year;
};
struct CB{
    char m[35];
    NGAY ngay;
    float tg;
    char nd[35];
};
 void nhapDSChuyenBay(CB a[],int &n){
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cin.getline(a[i].m,35);
        cin>>a[i].ngay.day>>a[i].ngay.month>>a[i].ngay.year;
        cin>>a[i].tg;
        cin.ignore();
        cin.getline(a[i].nd,35);
    }
}
void xuatChuyenBayToiTinh(CB a[],int n,char s[]){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].nd,s)==0){
            cout<<a[i].m<<"\t";
            cout<<a[i].ngay.day<<"/"<<a[i].ngay.month<<"/"<<a[i].ngay.year<<"\t";
            cout<<a[i].tg<<"\t";
            cout<<a[i].nd;
        }
        cout<<endl;
    }

 }

int main()
{
    CB a[100];
    int n;

    nhapDSChuyenBay(a,n);

    cout<<"Machuyen\t|Ngaybay\t|Giobay\t|Noiden\n";
    xuatChuyenBayToiTinh(a,n,"Ha Noi");

    return 0;
}

// cach 2

int check(CB a, char s[]){
    for( int i = 0; i < strlen(s); i++){
        if(a.nd[i]!=s[i]) return 0;
    }
    return 1;
}
 void xuatChuyenBayToiTinh(CB a[],int n,char s[]){
    for(int i = 0; i < n; i++){
        if(check(a[i],s)==1){
            cout<<a[i].m<<"\t";
            cout<<a[i].ngay.day<<"/"<<a[i].ngay.month<<"/"<<a[i].ngay.year<<"\t";
            cout<<a[i].tg<<"\t";
            cout<<a[i].nd;
        }
        cout<<endl;
    }
 }

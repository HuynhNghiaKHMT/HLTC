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
CB tgdn(CB a[],int n){
    int max = a[0].tg;
    int VT;
    for(int i = 1; i < n; i++){
        if(a[i].tg>max){
            max = a[i].tg;
            VT = i;
        }
    }
    return a[VT];

}
int main()
{
    CB a[100];
    int n;
    nhapDSChuyenBay(a,n);
    char s[35];
    cin.getline(s,35);
    int m = strlen(tgdn(a,n).nd);

    for(int i = strlen(s)-1; i >=0; i--){
        if(tgdn(a,n).nd[m-1]!=s[i]){
            cout<<"NO";
            return 0;
        }
        m--;
    }
    cout<<"YES";

    return 0;
}

// cach 2: USE string

struct CB{
    string m;
    NGAY ngay;
    float tg;
    string nd;

};
//....cac buoc tuong tu nhu tren.....
int main()
{
    CB a[100];
    int n;
    nhapDSChuyenBay(a,n);
    string s;
    cin >> s;
    string N =  tgdn(a,n).nd;
    N = N.substr(N.find_last_of(' ')+1);
    if (N == s) cout << "YES";
    else cout << "NO";
    return 0;
}

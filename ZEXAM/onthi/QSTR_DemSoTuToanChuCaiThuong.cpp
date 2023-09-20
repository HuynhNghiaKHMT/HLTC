#include <iostream>
#include<cstring>

using namespace std;

int KtraTu(char a[],int &i){

    while(a[i]!=' '&& a[i]!='\0'){
        if('a'>a[i] || a[i]>'z'){
            return 0;
        }
        i++;
    }
    return 1;
}
int DemSoTuChiChuaChuCaiThuong(char a[]){
    int i=0;
    int sum = 0;
    if(a[i]!=' '){
        if(KtraTu(a,i)==1) sum++;
    }

    while(a[i]!='\0'){
        if(a[i]!=' '&& a[i-1]==' '){
            if(KtraTu(a,i)==1) sum++;
        }
        i++;
    }
    return sum;
}

int main()
{
    char s[256];
    cin.getline(s,256);

    cout<<DemSoTuChiChuaChuCaiThuong(s);

    return 0;
}

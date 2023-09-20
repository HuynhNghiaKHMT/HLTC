/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

void ThayTheKyTuChuCai(char a[],char x){
    for(int i = 0; i < strlen (a); i++){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            a[i]=x;
    }
}


int main()
{
    char s[256];
    cin.getline(s,256);
    char x;
    cin>>x;
    ThayTheKyTuChuCai(s,x); // Ham thay the cac ky tu chu cai co trong chuoi s thanh ky tu x
    cout<<s;
    return 0;
}

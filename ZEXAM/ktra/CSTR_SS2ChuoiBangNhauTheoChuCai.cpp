#include <iostream>
#include<cstring>

using namespace std;


int laChuCai(char x){
    if('A'> x || (x<'a'&&'Z'<x) || x>'z'){
        return 0;
    }
     return 1;
}
int SoSanhBangNhau(char s[],char t[]){
    if(strlen(s)==strlen(t)){
        for(int i = 0; i < strlen(s); i++){
            if(laChuCai(s[i])==1 || laChuCai(t[i])==1){
                    if (tolower(s[i]) != tolower(t[i])) return 0;
// if((tolower(x)== y)||(toupper(x)==y)||(x == y)) return 1;
// 2 hang tren la nhu nhau
            }
        }
        return 1;
    }
    else return 0;
}

int main()
{
    char s[256], t[256];
    cin.getline(s,256);
    cin.getline(t,256);
    cout<<SoSanhBangNhau(s,t);

    return 0;
}

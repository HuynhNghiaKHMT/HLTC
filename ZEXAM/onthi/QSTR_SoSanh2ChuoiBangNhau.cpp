#include <iostream>
#include<cstring>

using namespace std;

int laChuSo(char x,char y){
    if(x!=y){
        return 0;
    }
    return 1;
}
int laChuCai(char x){
    if('A'> x || (x<'a'&&'Z'<x) || x>'z'){
        return 0;
    }
     return 1;
}
int SoSanhBangNhauTheoSo(char s[],char t[]){
    if(strlen(s)==strlen(t)){
        for(int i = 0; i < strlen(s); i++){
            if('0'<=s[i]&&s[i]<='9'){
                if (laChuSo(s[i],t[i])==0)
                    return 0;
            }
            else if(('a'<=s[i] && s[i]<='z')||('A'<=s[i] && s[i]<='Z')){
                if (laChuCai(t[i])==0)
                    return 0;
            }
            else{
                if (laChuCai(t[i])==1)
                    return 0;
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
    cout<<SoSanhBangNhauTheoSo(s,t);//so giong nhau, cung la chu cai

    return 0;
}

// cach 2:
int laChuSo(char x){
    if('0'> x || x >'9'){
        return 0;
    }
    return 1;
}
int laChuCai(char x){
    if('A'> x || (x<'a'&&'Z'<x) || x>'z'){
        return 0;
    }
     return 1;
}
int SoSanhBangNhauTheoSo(char s[],char t[]){
    if(strlen(s)==strlen(t)){
        for(int i = 0; i < strlen(s); i++){

            if (laChuSo(s[i])!=laChuSo(t[i]))
                return 0;
            else if (laChuSo(s[i])==1 && s[i]!=t[i])
                return 0;
            else if (laChuCai(s[i])!=laChuCai(t[i]))
                return 0;
        }
        return 1;
    }
    else return 0;
}

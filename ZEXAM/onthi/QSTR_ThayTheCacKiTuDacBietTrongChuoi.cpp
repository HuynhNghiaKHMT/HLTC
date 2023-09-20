#include <iostream>
#include<cstring>

using namespace std;

void ThayTheKyTuDacBiet(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if('0'<=s[i] && s[i]<='9')      continue;
        else if('A'<=s[i] && s[i]<='Z') continue;
        else if('a'<=s[i] && s[i]<='z') continue;
        else   s[i]='.';
    }
}

int main()
{
    char s[256];
    cin.getline(s,256);
    ThayTheKyTuDacBiet(s);// Ham thay the cac ky tu dac biet co trong chuoi s thanh ky tu .
    cout<<s;
    return 0;
}

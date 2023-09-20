#include <iostream>
#include<cstring>

using namespace std;

int checkw(char s[],int i){
    while(s[i]!=' ' && s[i]!='\0'){
        if('0'<=s[i] && s[i]<='9') return 0;
        i++;
    }
    return 1;
}
int DemTu(char s[]){
    int dem  = 0, i = 0;

    if(s[0]!=' ' && checkw(s,i)==1) dem++;
    for(int i = 0; i < strlen(s); i++){
        if(s[i]!=' ' && s[i-1]==' ')
            if(checkw(s,i)==1) dem++;

    }
    return dem;

}

int main()
{
    char s[256];
    cin.getline(s,256);
    cout<<DemTu(s);

    return 0;
}

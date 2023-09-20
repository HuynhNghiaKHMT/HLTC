#include <iostream>
#include<cstring>

using namespace std;

int DemSoKyTuNguyenAm(char s[]){
    int dem = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i]=='a' || s[i]=='A')   dem++;
        if(s[i]=='e' || s[i]=='E')   dem++;
        if(s[i]=='o' || s[i]=='O')   dem++;
        if(s[i]=='i' || s[i]=='I')   dem++;
        if(s[i]=='u' || s[i]=='U')   dem++;
    }
    return dem;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    cout<<DemSoKyTuNguyenAm(s);
    return 0;
}

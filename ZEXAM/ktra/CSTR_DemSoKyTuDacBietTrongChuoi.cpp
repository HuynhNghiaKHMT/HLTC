/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

int DemSoKyTuDacBiet(char a[]){
    int dem  = 0;
    for(int i = 0; i < strlen(a) ;i++){
        if(a[i]>='a' && a[i]<='z') continue;
        else if(a[i]>='A' && a[i]<='Z') continue;
        else if(a[i]>='0' && a[i]<='9') continue;
        else dem++;
    }
    return dem;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    cout<<DemSoKyTuDacBiet(s);
    return 0;
}

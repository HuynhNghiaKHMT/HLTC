#include <iostream>
#include <cstring>
using namespace std;

void StringReverse(char s[]){
    int n = strlen(s);
    char a[n];
    int na = 0, m = 0;

    for(int i = 0; i <= n; i++){
        if(s[i]!=' ' && s[i]!='\0')
            a[na++]=s[i];
        else{/*if(s[i]==' ' || s[i]=='\0')*/
            a[na]=s[i];
            for(int j = 0; j < na/2; j++)
            swap(a[j],a[na-j-1]);

            for(int j = 0; j <= na; j++)
            s[m++]=a[j];

            na = 0;
        }
    }
    cout<<s;
}
int main ()
{
    char a[256];
    cin.getline(a,256);
    StringReverse(a);

    return 0;
}

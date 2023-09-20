#include <iostream>
#include <cstring>
using namespace std;

int check(int x,int y,char c[],char s){
    int dem = 0;
    for(int i = x; i < y; i++){
        if(s==c[i]) dem++;
    }
    return dem;
}
int check1 (char x,char s[],int ns){
    for(int j = 0; j < ns; j++){
        if(x==s[j]) return 0;
    }
    return 1;
}
void findsubstring(char a[],char b[]){
    int na = strlen(a);
    int nb = strlen(b);
    char s[nb];
    int ns = 1;
    s[0] = b[0];

    for(int i = 0; i < nb; i++){
        if(check1(b[i],s,ns)==1)
            s[ns++] = b[i];
    }

    int dem;
    for(int i = 0; i <= na - nb; i++){
        dem = 0;
        for(int j = 0; j < strlen(s) ; j++){
            if(check(i,nb+i,a,s[j])==check(0,nb,b,s[j]))
                dem++;
        }
        if(dem == strlen(s)){
            for(int j = i; j < nb + i; j++){
                cout<<a[j];
            }
            cout<<endl;
        }
    }
}
int main()
{
    char a[20000];
    cin.getline(a,20000);
    char b[20];
    cin.getline(b,20);
    findsubstring(a,b);

    return 0;
}

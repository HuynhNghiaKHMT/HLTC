#include <iostream>
#include <cstring>
using namespace std;

int check1(char x, char c[],int nc){
    for(int i = 0; i < nc; i++){
            if(x==c[i]) return 0;
    }
    return 1;
}
void input( char a[], char c[],int &nc){
    c[0] = a[0];
    for(int i = 0; i < strlen (a); i++){
        if(check1(a[i],c,nc)==1)
            c[nc++] = a[i];
    }
}
int Check2(char x, char a[]){
    int dem = 0;
    for(int i = 0; i < strlen(a); i++){
        if(x==a[i]) dem++;
    }
    return dem;
}
int Check(char a[], char b[], char c[], int nc ){
    int dem = 0;
    for(int i = 0; i < nc; i++){
        if(Check2(c[i],a) != Check2(c[i],b))
            return 0;
    }
    return 1;
}
int main()
{

   char a[100];
   cin.getline(a,100);
   char b[100];
   cin.getline(b,100);
   char c[100];
   int nc = 1;
   input (a,c,nc);

   if(Check(a,b,c,nc)==1) cout<<"YES";
   else cout<<"NO";

   return 0;
}

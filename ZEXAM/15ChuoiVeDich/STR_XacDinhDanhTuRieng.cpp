#include <iostream>
#include <cstring>
using namespace std;

void findwordtoupper(char a[]){
    int na = strlen(a);
    char b[na];
    int nb = 0;
    for(int i = 0; i < strlen(a); i++){
        if('A'<=a[i] && a[i]<='Z'){
            b[nb++]=a[i];
            int j = i;
            while(('a'<=a[j+1] && a[j+1]<='z') || (a[j+1]==' ' && ('A'<=a[j+2] && a[j+2]<='Z'))){
                b[nb] = a[j+1];
                nb++;
                j++;
            }
        }
    }
    for(int i = 0 ; i < nb; i++){
        cout<<b[i];
        if(('a'<=b[i] && b[i]<='z')&&('A'<=b[i+1] && b[i+1]<='Z'))
            cout<<endl;
    }
}

int main()
{
    char a[10000];
    cin.getline(a,10000);
    findwordtoupper(a);

    return 0;
}

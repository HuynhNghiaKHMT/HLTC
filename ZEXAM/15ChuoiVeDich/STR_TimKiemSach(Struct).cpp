#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct Book{
    char name[250];
};
int check(int j,Book x, char b[]){
    int nb = strlen(b);
    for(int i = 1; i < nb;i++){
        if(x.name[j+i] != b[i]) return 0;
    }
    return 1;
}

int main () {

    Book a[1000];
    int n = 0;
    while (1){
        cin.getline(a[n].name,250);
        if(a[n].name[0]=='.') break;
        n++;
    }
    char b[250];
    cin.getline(b,250);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < strlen(a[i].name); j++){
            if(tolower(a[i].name[j])==tolower(b[0]) && check(j,a[i],b)==1){
                cout<<a[i].name<<endl;
                break;
            }
        }
    }
    return 0;
}

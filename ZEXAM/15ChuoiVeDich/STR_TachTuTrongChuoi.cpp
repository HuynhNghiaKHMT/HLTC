#include <iostream>
#include <cstring>
using namespace std;

int check( char x, char b[]){
    for(int i = 0; i < strlen(b); i++){
        if(x == b[i]) return 1;
    }
    return 0;
}
void listWord(char a[],char b[]){
    int na = strlen(a);

    for(int i = 0 ; i < na;i++){
        if(check(a[i],b)==1 && check(a[i+1],b)==1)
            continue;
        if(i == na-1 && check(a[i],b)==1) break;
        if(check(a[i],b)==1){
            cout<<endl;
            continue;
        }
        cout<<a[i];
    }
}
int main()
{

    char a[1000];
    cin.getline(a,1000);
    char b[20];
    cin.getline(b,20);
    listWord(a,b);

    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

void RemoveWhitespace(char a[]){
    int n =  strlen(a);

    while (a[0]==' '){
        for(int i = 0; i < n; i++)
            a[i] = a[i+1];
        n--;
    }
    while (a[n-1]==' '){
        a[n-1] = a[n];
        n--;
    }
}

int main () {
    int na,nb=0;
    cin >> na;
    char a[10000],b[na*10000];
    cin.ignore();

    for(int i = 0; i < na; i++){
        cin.getline(a,10000);
        RemoveWhitespace(a);
        for(int j = 0; j < strlen(a);j++){
            b[nb++] = a[j];
        }
        if(i<na-1) b[nb++] = '-';
        if(i==na-1) b[nb] = '\0';
    }

        cout<<b<<endl;

    return 0;
}

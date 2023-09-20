#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}
int myStrcmp(char a[], char b[]){
    int na = 0;
    while(a[na]!='\0'){
        na++;
    }
    int nb = 0;
    while(b[nb]!='\0'){
        nb++;
    }
    for(int i = 0; i < max(na,nb); i++){
        if((int)a[i]<(int)b[i]) return -1;
        if((int)a[i]>(int)b[i]) return 1;
    }
    return 0;

}

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

int myStrlen(char s[]){
    int i = 0;
    while(s[i]!='\0')
        i++;
    return i;
}

int myStrcmp(char s1[MAX], char s2[MAX]){

    for(int i = 0; i < max(myStrlen(s1),myStrlen(s2)); i++){
        if((int)s1[i]<(int)s2[i]) return -1;
        if((int)s1[i]>(int)s2[i]) return 1;
    }
    return 0;
}
int check(char x,char a[],int na){
    for(int i = 0; i < na; i++){
        if(x==a[i]) return 0;
    }
    return 1;
}
void DemKyTu(char s[]){
    int n = myStrlen(s);
    char a[n],na = 1;
    a[0]=s[0];

    for(int i = 1; i < n; i++){
        if(check(s[i],a,na)==1)
            a[na++]=s[i];
    }

    int dem;
    for(int i = 0; i < na; i++){
        dem = 0;
        for(int j = 0; j < n; j++){
            if(a[i]==s[j]) dem++;
        }
        cout<<a[i]<<": "<<dem<<endl;
    }
}

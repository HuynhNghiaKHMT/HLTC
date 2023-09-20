#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
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
void StringReverse(char s[]){
    int n = myStrlen(s);
    for(int i = 0; i < n/2; i++)
        swap(s[i],s[n-1-i]);

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
}

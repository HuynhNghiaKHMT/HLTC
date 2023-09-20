#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n;){
        if(s[i]==' ' && s[i+1]==' '){
            for(int j = i; j < n; j++)
            s[j]=s[j+1];
        n--;
        }
        else i++;
    }
    for(int i = 0; i < n;i++){
        if (s[i]==' ' && s[i+1]=='.'){
            for(int j = i; j < n; j++)
            s[j]=s[j+1];
        n--;
        }
    }
}


int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}


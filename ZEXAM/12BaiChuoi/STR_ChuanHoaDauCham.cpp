#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char a[]){
    int n = strlen(a);
    while (a[0]==' '){
        for(int i = 0; i < n; i++)
            a[i] = a[i+1];
        n--;
    }
    while (a[n-1]==' '){
        a[n-1] = a[n];
        n--;
    }

    for(int i = 0; i < n; ){
        if(a[i]==' ' && a[i+1]==' '){
            for(int j = i; j < n; j++)
                a[j] = a[j+1];

            n--;
        }
        else i++;
    }

    for(int i = 0; i < n;i++){
        if (a[i]==' ' && a[i+1]=='.'){
            for(int j = i; j < n; j++)
            a[j]=a[j+1];
        n--;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i]=='.' && a[i+1]!=' '){
            n++;
            for(int j = n-1; j >= i; j--)
                a[j+1]=a[j];
            a[i+1]=' ';
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


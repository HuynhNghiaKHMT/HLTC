#include <iostream>
#include <cstring>
using namespace std;
#define MAX 255

void removespace(char a[]){
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

        for(int i = 0; i < n; ){
            if(a[i]==' ' && a[i+1]==' '){
                for(int j = i; j < n; j++)
                    a[j] = a[j+1];

                n--;
            }

            if(a[i]!=' ' || a[i+1]!=' ')
            i++;
        }

        for(int i = 0; i < n; i++ ){
            if(a[i]==' '){
                a[i+1] = toupper(a[i+1]);
                i++;
                continue;
            }
            a[i] = tolower(a[i]);
        }
        a[0] = toupper(a[0]);

    cout<<a;
}

int main()
{
	char s[MAX];
	cin.getline(s, 254);
    removespace(s);

	return 0;
}

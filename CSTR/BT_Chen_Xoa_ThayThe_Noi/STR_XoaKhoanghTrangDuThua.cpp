#include <iostream>
#include <cstring>
using namespace std;
#define MAX 255

void removespace(char s[]){
    int i = 0;
    while(s[0]==' ')
        strcpy(&s[0],&s[1]);

    for(int i = 0; i < strlen(s) ; i++){
        if(s[i]==' ' && s[i+1]==' '){
            strcpy(&s[i],&s[i+1]);
            i--;
        }
    }
    while (s[strlen(s)-1]==' ')
        strcpy(&s[strlen(s)-1], &s[strlen(s)]);

    cout<<s;
}

int main()
{
	char s[MAX];
	cin.getline(s, 254);
    removespace(s);

	return 0;
}

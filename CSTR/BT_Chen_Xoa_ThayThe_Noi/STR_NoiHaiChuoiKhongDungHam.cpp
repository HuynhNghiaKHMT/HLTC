/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	bool kt = myStrcat(s1, s2);
    if(kt == 1) cout<<s1;
	else        cout<<"Khong noi duoc. Khong du bo nho.";

	return 0;
}
int myStrlen(char s[]){
    int i = 0;
    while(s[i]!='\0')
        i++;
    return i;
}
bool myStrcat(char s1[], char s2[]){
    if( myStrlen(s1)+ myStrlen(s2)<=MAX){
        int len = myStrlen(s1);
        for(int i = 0; i <= myStrlen(s2); i++)
            s1[len++] = s2[i];
            return 1;
    }
    if(myStrlen(s1) + myStrlen(s2)>MAX) return 0;
}

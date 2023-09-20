

#include<iostream>
#include<cstring>
using namespace std;

int countLetters(char s[]) {
    int dem = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i]=='j' || s[i]=='J') dem++;
        if(s[i]=='w' || s[i]=='W') dem++;
        if(s[i]=='z' || s[i]=='Z') dem++;
        if(s[i]=='f' || s[i]=='F') dem++;
    }
    return dem;

}


int main()
{

   char s[256];
   cin.getline(s, 256);

   cout << countLetters(s) << endl;
    return 0;
}

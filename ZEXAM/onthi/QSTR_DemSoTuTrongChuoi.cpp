#include<iostream>
#include<cstring>
using namespace std;

int countWords(char s[]){
    int dem = 0;
    if(s[0]!=' ')dem++;

        for(int i = 0; i < strlen(s); i++){
           if(s[i-1]== ' '){
                if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z'))
                dem++;
            }
        }
     return dem;
}

int main()
{

   char s[256];
   cin.getline(s, 256);

   cout << countWords(s) << endl;
    return 0;
}

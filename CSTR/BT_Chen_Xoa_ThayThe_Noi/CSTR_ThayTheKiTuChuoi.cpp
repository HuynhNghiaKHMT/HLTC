#include <iostream>
#include <cstring>
using namespace std;


void replaceChar(char s1[], char s2[], char n ='*'){
    for(int i = 0; i < strlen(s1) ; i++){
        for( int j = 0; j < strlen(s2); j++){
            if(s1[i]==s2[j])
                s1[i]=n;
        }
    }
}

int main()
{

   char s1[100],s2[100];
   cin.getline(s1,100);
   cin.getline(s2,100);
   // Thay nhung ky tu trong s1 ma co chua trong s2 thanh '*'
   replaceChar(s1, s2, ' *');
   cout<<s1;

   return 0;
}

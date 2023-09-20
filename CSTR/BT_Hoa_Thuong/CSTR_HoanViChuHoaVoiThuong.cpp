
#include <iostream>
#include <cstring>
using namespace std;

void HoanViChu(char str[]){
    for(int i = 0; i < strlen(str); i++){
        if('A'<=str[i] && str[i]<= 'Z')
            str[i]=tolower(str[i]);
        else if('a'<=str[i] && str[i]<= 'z')
             str[i]=toupper(str[i]);

    }
}


int main()
{

   char str[100];
   cin.getline(str,100);

   HoanViChu(str);
   cout<<str;

   return 0;
}

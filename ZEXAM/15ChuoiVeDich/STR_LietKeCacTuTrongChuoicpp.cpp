#include <iostream>
#include <cstring>
using namespace std;

void listWord(char str[]){
    for(int i = 0 ; i < strlen(str);i++){
        if(str[i]!=' ')
            cout<<str[i];
        else cout<<endl;
    }
}

int main()
{
   char str[100];
   cin.getline(str,100);
   listWord(str);

   return 0;
}



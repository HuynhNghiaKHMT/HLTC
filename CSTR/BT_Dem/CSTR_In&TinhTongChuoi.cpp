#include <iostream>
#include <string>           //#include <string.h>
using namespace std;

int main() {
    string str;             // char str[1000000];
    cin>> str;              //gets(str);
    int s = 0;              //int len = strlen(str);
    int len = 0;            //int s = 0;

    while(str[len]!='\0'){
        len++;
    }

    if(str[0]=='-'){
        for (int i = 0; i < len-1; i++){
            str[i]=str[i+1];
            cout<<str[i]<<" ";
        //mã acci: VD ký tụ '0' là 48; '1' là 49
            s = s + (str[i]-'0');
        }
        len--;
    }
    else{
        for (int i = 0; i < len; i++){
            cout<<str[i]<<" ";
            s = s + (str[i]-'0');
        }

    }

    cout<<endl;
    cout<<len<<endl;
    cout<<s;


    return 0;
}

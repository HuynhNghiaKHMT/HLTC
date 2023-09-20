/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
toupper
tolower
###End banned keyword*/
#include <iostream>
#include<cstring>
using namespace std;

void transformString(char s1[], char s2[]){
    for(int i = 0; i < strlen (s1); i++){
            if(i%2==0 && (s1[i]>='a' && s1[i]<='z'))
                s2[i]= s1[i]-char(32);
            else if(i%2==0 && (s1[i]>='A' && s1[i]<='Z'))
                s2[i]=s1[i];
            else if(i%2!=0 && (s1[i]>='A' && s1[i]<='Z'))
                s2[i]= s1[i]+char(32);
            else if(i%2!=0 && (s1[i]>='a' && s1[i]<='z'))
                s2[i]=s1[i];
            else s2[i]='*';
    }
    s2[strlen(s1)]='\0';
}
int main()
{
    char s1[200], s2[200];
    cout<<"Nhap chuoi = ";
    cin.getline(s1, 199);
    transformString(s1, s2); //khong dung duoc ham toupper, tolower
    cout<<"\ns1="<<s1<<endl;
    cout<<"s2="<<s2;

    return 0;
}


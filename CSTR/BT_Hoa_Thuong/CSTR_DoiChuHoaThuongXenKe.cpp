
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[200], s2[200];
    cout<<"Nhap chuoi = ";

    cin.getline(s1,200);
    strcpy(s2,s1);
    for(int i = 0; i <= strlen(s1); i++){
        if(i%2==0 && (s1[i]>='a' && s1[i]<='z'))
            s2[i]=toupper(s1[i]);

        else if(i%2!=0 && (s1[i]>='A' && s1[i]<='Z'))
            s2[i]=tolower(s1[i]);

        else s2[i]=s1[i];

    }

    cout<<"\ns1="<<s1<<endl;
    cout<<"s2="<<s2;

    return 0;
}

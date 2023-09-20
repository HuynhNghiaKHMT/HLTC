#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[100];

    cout<<"Nhap chuoi ki tu: ";
    gets(str);

    int i ;
    int dem=0;

    while (str[i]==' '){
        dem++;
        i++;
    }

    int first = strlen(str);
    for (int i=0; i<=first-dem; i++){
            str[i]=str[i+dem];
    }

     puts(str);



    return 0;
}

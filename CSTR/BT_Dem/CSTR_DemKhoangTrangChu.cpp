#include <iostream>
#include <cstring>
using namespace std;

int countBlankSpace(char str[]){
    int dem = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i]==' ')
            dem++;
    }
    return dem;
}
void countUpperLower(char str[]){
    int hoa,thuong;
    hoa = 0;
    thuong = 0;
    for(int i = 0; i < strlen(str); i++){
        if ('A'<=str[i]&& str[i]<='Z') hoa++;
        if ('a'<=str[i]&& str[i]<='z') thuong++;
    }
    cout<<"\nSo ky tu hoa: "<< hoa;
    cout<<"\nSo ky tu thuong: "<<thuong;
}

int main()
{

   char str[100], str1[100];
   cin.getline(str,100);
   cout<<"Chuoi: "<<str;
   cout<<"\nSo ky tu khoang trang: "<<countBlankSpace(str);
   countUpperLower(str);



   return 0;
}

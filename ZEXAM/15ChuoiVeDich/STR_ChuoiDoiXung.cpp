#include <iostream>
using namespace std;

int isCaseInsensitivePalindrome(string a){
    string b;
    int nb = 0;
    int n = a.size();

    for(int i = n-1; i >= 0; i--){
        a[i] = toupper(a[i]);
        b[nb++] = a[i];
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}

int main ()
{
    string a;
    getline(cin,a);
    cout<< isCaseInsensitivePalindrome(a);
    return 0;
}

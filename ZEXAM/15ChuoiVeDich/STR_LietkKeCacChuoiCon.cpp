#include <iostream>
#include <cstring>
using namespace std;

void listWord(char a[]){
    int na = strlen(a);

    for(int i = 0; i < na; i++){
        for(int j = 0;j <= i ;j++){
            for(int k = j; k < na - i + j; k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}

int main()
{
    char a[100];
    cin.getline(a,100);
    listWord(a);

    return 0;
}

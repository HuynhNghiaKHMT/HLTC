/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;

bool isRepeat(string a){
    int dem  = a.size();
    if(dem%2==0){
        for(int i = 0 ; i < a.size()/2; i++){
            if(a[i]!=a[a.size()/2+i])  return 0;
        }
        return 1;
    }
    else return 0;
}

int main ()
{
    string inputString;
    getline(cin,inputString);
    cout<< isRepeat(inputString) ;
    return 0;
}

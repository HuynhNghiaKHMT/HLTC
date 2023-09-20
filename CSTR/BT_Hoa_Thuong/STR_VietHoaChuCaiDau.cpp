/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/
#include <iostream>
#include <string>

using namespace std;

string properNounCorrection(string a){
    for(int i = 1; i < a.size();i++){
        a[i] = tolower(a[i]) ;
    }
        a[0] = toupper(a[0]);
        return a;
}

int main ()
{
    string a;
    getline(cin,a);
    cout<< properNounCorrection(a);
    return 0;
}

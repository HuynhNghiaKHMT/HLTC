/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/
#include <iostream>
#include <string>
using namespace std;

string encloseInBrackets(string a){
    return "(" + a + ")";

}

int main ()
{
    string a;
    getline(cin,a);
    cout<< encloseInBrackets(a);
    return 0;
}

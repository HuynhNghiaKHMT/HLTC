/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

int reverse(int n){

    int s = 0;
    for(int i=n; i>0; i/=10){

        s = s*10 + i%10;
    }
     if(s==n) return 0;
     return 1;

}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}

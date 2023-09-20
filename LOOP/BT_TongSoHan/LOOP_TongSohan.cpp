/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
float calculate(int n){
    float s = 0;
    for (int i=1; i<=n; i++){
        s = sqrt(s+i);
    }
    return s;
}

int main() {
	int n;
	cin >> n;
    cout << setprecision(3) << calculate(n);
}

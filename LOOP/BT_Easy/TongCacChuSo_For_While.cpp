#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int N = 0;
    int M = 0;

    while (n!=0){
        N = n%10;
        M = M + N;
        n = n/10;
    }
    cout<<M<<", "<<M/10<<", "<<M%10;

    return 0;
}

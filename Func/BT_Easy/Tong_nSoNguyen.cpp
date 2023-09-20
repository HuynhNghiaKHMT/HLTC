#include <iostream>

using namespace std;

int sumMany(int m);
int main()
{
    int n;
    cin>>n;
    cout<<sumMany(n);

    return 0;
}

int sumMany(int m)
 {
    int sum = 0;
    int x;
    for (int i =1; i<=m ; i++){
        cin>>x;
        sum += x;
    }
        return sum;

 }

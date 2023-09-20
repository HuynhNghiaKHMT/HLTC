#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,num;
    cin>>n;

    for(int i=2; i<=n; i++){
        if(n%i==0){
        num = i;
        break;
        }
    }
    for (int i=num; i<=2*n; i++){
        if(i>n && i%num==0){
        cout<<i;
        break;
        }
    }


    return 0;
}
